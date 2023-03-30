#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - SHow the number of elements of a list
 * @h: A linked list
 *
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
