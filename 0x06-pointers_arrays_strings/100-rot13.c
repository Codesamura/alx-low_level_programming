#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @z: The string to encode
 * Return: The new string
 */
char *rot13(char *z)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; z[i] != '\0'; i++)
	{

		for (j = 0; j < 56; j++)
		{
			if (z[i] == a[j])
			{
				z[i] = n[j];
				break;
			}
		}
	}
	return (z);
}
