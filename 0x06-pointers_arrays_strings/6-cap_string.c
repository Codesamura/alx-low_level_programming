#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @n: The string to look at
 * Return: the capitalized string
 */
char *cap_string(char *n)
{
	int i = 0;
	int j;

	char brainBox[] = " \n\t,;.!?\"(){}";

	if (n[0] >= 'a' && n[0] <= 'z')
		n[0] -= 32;
	for (; n[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (z[i] == brainBox[j])
			{
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
					n[i + 1] -= 32;
			}
		}
	}
	return (n);
}
