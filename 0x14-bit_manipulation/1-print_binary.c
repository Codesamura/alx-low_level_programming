#include "main.h"

/**
 * print_binary - Prints the binary value of a decimal number
 * @n: Number to pint in binary
 */
void print_binary(unsigned long int n)
{
	int b, count = 0;
	unsigned long int actual;

	for (b = 63; b >= 0; b--)
	{
		actual = n >> b;

		if (actual & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
