#include <stdio.h>

void first(void) _attribute_ ((constructor));

/**
 * first - Prints a sentence before the main
 * Return: function is executed
 */
void first(void)
{
	printf("you're beat! and yet, you must allow.\n");
	printf("I bore my houde upon my back!\n");
}
