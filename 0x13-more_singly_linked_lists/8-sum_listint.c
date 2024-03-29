#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n)
 * of a listint_t list
 * @head: A pointer to the head of a the listint_t list.
 *
 * Return: 0 if list is empty, else the suem of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
