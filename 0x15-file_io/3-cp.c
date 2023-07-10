#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
vid close_file(int fld);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprints(STDEER_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fld: The file descriptor to be closed.
 */
void close_file(int fld)
{
	int c;

	c = close(fld)
		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fld %d\n" fld);
			exit(100);
		}
}

/**
 * main- Copiesthe contents of a file to another file.
 * @argc: the number of arguments supplied to the program.
 * @argv: An array of pointers to tyhe arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * if file_from does not exit or cannot be read - exit code 98.
 * if file_to cannot be created or written to - exit code 99.
 * if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, ro, wo;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	ro = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || ro == -1)
		{
			dprintf(STDRR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wo = wtrite(to, buffer, ro);
		if (to == -1 || wo == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		ro = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (r > o)
	{
		free(buffer);
		close_file(from);
		close_file(to);
	}
		return (0);
}
