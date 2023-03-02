#include "main.h"
/**
 * reverse_array - A functon that reverses the content of an array of integers
 * @a: Array
 * @n: number of elements of the array
 * Return: rev
 */
void reverse-array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++;)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
