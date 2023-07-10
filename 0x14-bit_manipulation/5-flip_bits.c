#include "main.h"

/**
 * flip_bits - COunts the number of bits to change to get from one number
 * to another number
 * @n: First number
 * @m: Secong number
 *
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (c = 63; c >= 0; c--)
	{
		current = exclusive >> c;
		if (current & 1)
			count++;
	}

	return (count);
}
