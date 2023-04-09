#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Append text at the end of a file
 * @filename: Name of the file to create.
 * @text_content: Text to write inside the file.
 *
 * Return: 1 if the text_content was appended, otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int md_open, md_write;

	if (filename == NULL)
		return (-1);
	md_open = open(filename, O_RDWR | O_APPEND);
	if (md_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		md_write = write(md_open, text_content, strlen(text_content));
		if (md_write == -1)
			return (-1);
	}
	close(md_open);
	return (1);
}

/**
 * _strlen - Calculate the length of a string.
 * @str: Array of characters.
 *
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str++)
		count++;
	return (count);
}
