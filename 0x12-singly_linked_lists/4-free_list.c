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
	list_t *tmp;

	while (head == NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
