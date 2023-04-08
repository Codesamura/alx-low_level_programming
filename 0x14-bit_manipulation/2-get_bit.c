#include "main.h"

/**
 * get_bit - It returns the value of a bit at an index in a
 * decimal number.
 * @n: Number to look for
 * @index: Index of the bit
 *
 * Return: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
