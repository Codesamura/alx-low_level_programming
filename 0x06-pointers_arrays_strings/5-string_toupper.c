#include "main.h"
/**
 * string_toupper - Changes lower case to upper case
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] -= 32;
	}
	return (n);
}
