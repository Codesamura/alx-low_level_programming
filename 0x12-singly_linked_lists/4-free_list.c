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
	list_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		free(temp->str);
		free(temp);
	}
}
