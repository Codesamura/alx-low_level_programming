#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Function that adds a new node
 * @head: const double pointer of structure
 * @str: Const char poiinter for data to be added
 * Return: List with new node for list_t list.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;

	new = malloc(sizeof(list_t *));

	if (str == NULL)

	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}

	if (new == NULL)
		return (NULL);

	{
		new->next = *head;
		*head = new;

		new->str = strdup(str);
	}
		for (i = 0; str[i]; i++)
			;
		new->len = i;
		return (new);
}
