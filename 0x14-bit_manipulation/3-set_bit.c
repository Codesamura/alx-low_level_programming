#include "main.h"
#include <stdio.h>

/**
 * set_bit - It prints out the binary represetation of an unsigned long int
 * @n: The unsigned long int to be printed.
 * @index: The index at which to set the value.
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
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
			ret += 1;

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
