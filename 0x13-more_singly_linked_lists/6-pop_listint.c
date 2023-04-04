#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: 0 if the linked list is empty,else The head node's data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int rep;

	if (*head == NULL)
		return (0);

	tmp = *head;
	rep = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (rep);
}
