#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to the stdout
 * @cp: The character that is to be printed
 *
 * Return: 1 on success.
 * -1 is returned on error, and error is set appropriately.
 */
int _putchar(char cp)
{
	return (write(1, &cp, 1));
}
