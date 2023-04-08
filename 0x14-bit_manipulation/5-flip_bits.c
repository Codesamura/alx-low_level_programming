#include "main.h"

/**
 * flip_bits - Finds the number of bits needed to flip to
 * change one number
 * to another.
 * @n: First number to be checked
 * @m: Second number to be checked
 *
 * Return: Number of bits neede to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nlent;
	unsigned long int mlent;
	unsigned long int flip;
	unsigned long int storagen;
	unsigned long int storagem;

	nlent = mlent = flip = 0;
	storagen = n;
	storagem = m;

	while (n > 0)
	{
		n = n >> 1;
		nlent++;
	}
	while (m > 0)
	{
		m = m >> 1;
		mlent++;
	}
	m = storagem;
	n = storagen;

	if (mlent > nlent)
	{
		while (mlent > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			mlent--;
		}
	}
	else
	{
		while (nlent > 0)
		{
			if ((m & 1) != (n & 1))
				flip += 1;
			m = m >> 1;
			n = n >> 1;
			nlent--;
		}
	}
	return (flip);
}
