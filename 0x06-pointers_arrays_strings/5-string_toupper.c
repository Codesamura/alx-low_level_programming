#include "main.h"
/**
 * string_toupper - A function that changes all lowercase letters of
 * a string to upper case
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		i++;
	}
	return (0);
}
