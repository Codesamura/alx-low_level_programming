#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @input_md: file_from.
 * @output_md: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int input_md, int output_md, char *argv[])
{
	if (input_md == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (output_md == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int input_md, output_md, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	input_md = open(argv[1], O_RDONLY);
	output_md = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(input_md, output_md, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(input_md, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(output_md, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(input_md);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_md);
		exit(100);
	}

	err_close = close(output_md);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_md);
		exit(100);
	}
	return (0);
}
