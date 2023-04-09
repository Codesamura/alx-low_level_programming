#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should
 * read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 * O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int read_md, equiv_md, open_md;
	char *buffer;

	if (filename == NULL)
		return (0);

	open_md = open(filename, O_RDONLY);
	if (open_md == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	read_md = read(open_md, buffer, letters);
	if (read_md == -1)
	{
		free(buffer);
		return (0);
	}
	equiv_md = write(STDOUT_FILENO, buffer, read_md);
	if (equiv_md == -1)
	{
		free(buffer);
		return (0);
	}
	close(open_md);
	free(buffer);
	return (equiv_md);
}
