#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the args content
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always zero
 */
int main(int aargc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
