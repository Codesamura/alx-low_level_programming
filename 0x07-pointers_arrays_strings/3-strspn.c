#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int letter;
	int mat = 0;

	while (s[mat])
	{
		for (letter = 0;accept[letter]; letter++)
		{
			if (accept[letter] == s[mat])
			{
				break;
			}
		}
		if (!accept[letter])
		{
			break;
		}
		mat++;
	}
	return (mat);
}
