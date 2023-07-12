#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * c_errchk - closes a file descriptor and prints
 * an error message if it fails
 *
 * @fd1: file descriptor to close
 *
 * Return: 0 on success, -1 on failure
 */
int c_errchk(int fd1)
{
	int error;

	error = close(fd1);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd1 %d\n", fd1);
		return (100);
	}
	return (0);
}

/**
 * write_error - error handler for a write error
 *
 * @fd2: first descriptor to close
 * @fd3: second descriptor to close
 * @nameoffile: filename prompting the error
 *
 * Return: 99
 */
int write_error(int fd2, int fd3, char *nameoffile)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", nameoffile);
	c_errchk(fd2);
	c_errchk(fd3);
	return (99);
}

/**
 * read_error - error handler for a read error
 *
 * @fd2: first descriptor to close
 * @fd3: second descriptor to close
 * @nameoffile: filename prompting the error
 *
 * Return: 98
 */
int read_error(int fd2, int fd3, char *nameoffile)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", nameoffile);
	c_errchk(fd2);
	c_errchk(fd3);
	return (98);
}

/**
 * main - copy one file to another, new file with perms 664
 * usage - cp file_from file_to
 *
 * @arg: number of arg
 * @avg: list of args
 *
 * Return: 97 if incorrect num of args
 * 98 if file_from does not exist or unreadable
 * 99 if write fails
 * 100 if file close fails
 * 0 otherwise
 */
int main(int arg, char *avg[])
{
	char buf[1024];
	int lenr, lenw, file_from, file_to, err;

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open(avg[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			avg[1]);
		return (98);
	}
	file_to = open(avg[2], O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", avg[2]);
		c_errchk(file_from);
		return (99);
	}
	do {
		lenr = read(file_from, buf, 1024);
		if (lenr == -1)
			return (read_error(file_from, file_to, avg[1]));
		lenw = write(file_to, buf, lenr);
		if (lenw == -1 || lenw != lenr)
			return (write_error(file_from, file_to, avg[2]));
	} while (lenr == 1024);
	err = c_errchk(file_from);
	err += c_errchk(file_to);
	if (err != 0)
		return (100);
	return (0);
}
