#include "main.h"
/**
 * print_binary - It prints the binary equivalent of a decimal number.
 *
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int i, equiv = 0;
	unsigned long int currt;

	for (i = 63; i >= 0; i--)
	{
		currt = n >> i;

		if (currt & 1)
		{
			_putchar('1');
			equiv++;
		}
		else if (equiv)
			_putchar('0');
	}
	if (!equiv)
		_putchar('0');
}
