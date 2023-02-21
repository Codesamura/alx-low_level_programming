#include <unistd.h >

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On the success 1.
 * On error, -1 is returnedx, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
