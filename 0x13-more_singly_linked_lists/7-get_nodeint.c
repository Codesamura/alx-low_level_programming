#include "lists.h"

/**
 * get_nodeint_at_index - Locates a give node of a listint_t
 * linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - Indices start at 0
 *
 * Return: NULL if the node does not exit, else the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
