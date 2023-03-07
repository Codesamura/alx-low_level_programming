#include "main.h"
/**
 * factorial - calculate the factorial
 * @n: The number whose factorial we are to calculte
 * Return: integer valuse
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
