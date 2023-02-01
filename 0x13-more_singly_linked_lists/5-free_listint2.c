#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the list
 * @head: the pointer to the head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		freed = (*head)->next;
		free(*head);
		*head = freed;
	}
}
