#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the list
 * @head: pointer to the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
