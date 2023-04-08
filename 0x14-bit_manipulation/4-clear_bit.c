#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: The unsigned long int to be printed in binary.
 * @index: the index at which to set the value to 0.
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ret;
	unsigned long int equiv;
	unsigned long int num;
	unsigned long int old;

	ret = equiv = num = 0;
	old = *n;

	if (index > 63)
		return (-1);

	while (equiv < 63)
	{
		ret = ret << 1;

		if (equiv == index)
			ret += 0;
		else
			ret += old & 1;
		equiv++;
		old = old >> 1;
	}
	while (equiv > 0)
	{
		num = num << 1;
		num += ret & 1;
		ret = ret >> 1;
		equiv--;
	}
	*n = num;
	return (1);
}
