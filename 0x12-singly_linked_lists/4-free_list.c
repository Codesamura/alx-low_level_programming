#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - Free a list
 * @head: Head of the linnked liost
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current_node;

	for (current_node = head; current_node != NULL; current_node = current_node->next)
	{
		free(current_node->str);
		free(current_node);
	}
}
