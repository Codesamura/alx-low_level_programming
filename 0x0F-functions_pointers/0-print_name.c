#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: Pointers to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
