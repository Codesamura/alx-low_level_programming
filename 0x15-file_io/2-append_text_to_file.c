#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Will append text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The string added to the end of the file.
 *
 * Return: 1 if the function is successful, -1 if it fails or
 * the file is NULL or the file doesn't exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int oa, ow, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	oa = open(filename, O_WRONLY | O_APPEND);
	ow = write(o, text_content, len);

	if (oa == -1 || ow == -1)
		return (-1);

	close(o);

	return (1);
}
