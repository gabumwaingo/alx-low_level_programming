#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees the list
 * @head: the pointer to the head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{

	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);

		free(head);
	}
}
