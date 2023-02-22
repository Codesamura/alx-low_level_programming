#include "main.h"
/**
 * times_table - Prints the 9 times table starting from 0
 * trib = row, crib = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int trib, crib, d;

	for (trib = 0; trib <= 9; trib++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (crib = 1; crib <= 9; crib++)
		{
			d = (trib * crib);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (crib < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

