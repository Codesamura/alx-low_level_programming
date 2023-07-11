#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Name of the file to create.
 * @filename: name of the file to create.
 * @text_content: number of the letters in the file
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
	wrf = write(fld, text_content, count);
	if (wrf == -1)
	{
		return (-1);
	}
	close(fld);
	return (1);
}
