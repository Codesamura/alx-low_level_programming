#include "main.h"

/**
 * get_endianness - Gets the endianness of a machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int u;
	char *y;

	y = (char *)&u;
	return (*y + 48);
}
