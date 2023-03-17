#include <stdio.h>
#include "main.h"

/**
 * mul- .....
 * num1: First number
 * num2: Second number
 * Return: Nothing
 */
int mul(void)
{
	int num1, num2, mul;

	printf("Enter two numbers:");
	scanf("%d %d", &num1, &num2);
	product = num1 * num2;
	printf("Product of two numbers: %d", product);
	return  (0);
}
