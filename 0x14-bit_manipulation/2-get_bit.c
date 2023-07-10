#include "main.h"

/**
 * get_bit - Returns the value of a bit at an index in a deimal number
 * @n: Number to search for
 * @index: Index of the bit
 *
 * Return: Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valu;

	if (index > 63)
		return (-1);

	valu = (n >> index) & 1;

	return (valu);
}
