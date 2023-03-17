#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - ....
 * @s1: ....
 * @s2: ....
 * @n: ....
 * Return: ....
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *empt;
	unsigned int i, l, j;
	unsigned int size;

	l = 0;
	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	while (s1[l] != '\0')
		l++;
	size = (l + n) * sizeof(*str);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
