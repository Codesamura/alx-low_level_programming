#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - check the code for Holberton School students.
 * @filename: name of the file
 * @text_content: number of the letters that i used
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fld = 0, wrf = 0, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
		{}
	}
	fld = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fld == -1)
	{
		return (-1);
	}
	wrf = write(ID, text_content, count);
	if (wrf == -1)
	{
		return (-1);
	}
	close(fld);
	return (1);
}
