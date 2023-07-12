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
	int file;
	ssize_t length = 0, le = 0;
	char *pntr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (le = 0, pntr = text_content; *pntr; pntr++)
			le++;
		length = write(file, text_content, le);
	}

	if (close(file) == -1 || le != length)
		return (-1);
	return (1);
}
