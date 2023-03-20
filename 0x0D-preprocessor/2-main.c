#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled from
 *
 * Return: Nothing
 */

int main(void)
{
	printf("%s\n", _BASE_FILE_);
	return (0);
}
