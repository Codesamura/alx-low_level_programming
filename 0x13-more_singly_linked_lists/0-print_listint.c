#include "lists.h"

/**
 * print_listint - Prints all the elemnts of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *crib = h;
	size_t nodes = 0;

	while (crib != NULL)
	{
		printf("%d\n", crib->n);
		nodes++;
		crib = crib->next;
	}
	return (nodes);
}
