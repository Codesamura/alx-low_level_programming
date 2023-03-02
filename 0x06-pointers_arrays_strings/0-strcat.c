#include "main.h" 
/**
 * _strcat - This is a function strcat
 * @dest: The first parameter
 * @src: The second parameter
 * Return: A string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '0' i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
