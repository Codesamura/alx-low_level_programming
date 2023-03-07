#include "main.h"

/**
 * _pow_recursion - Returns the value  of  raised to a value of y
 * @x: The value to multiply
 * @y: The value that shows the number of times to multiply the value of x
 * Return: The value multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y -1));
}
