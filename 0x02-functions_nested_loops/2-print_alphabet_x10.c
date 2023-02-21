#include "main.h"
/**
 * print_alphabet_x10 - A function that prints the alphabets 10 times
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int n, bo;

	bo = 0;

	while (bo < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		bo++;
		_putchar('\n');
	}
}
