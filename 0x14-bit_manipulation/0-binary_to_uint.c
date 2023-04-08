#include "main.h"

/**
 * binary_to_uint - It converts a binary number to unsigned int
 * @b: The string containing the binary number
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int deci_value = 0;

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci_value = 2 * deci_value + (b[i] - '0');
	}

	return (deci_value);

	if (!b)
		return (0);
}
