#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reversewbtye linked list
 * @head: pointer to head of the list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *new;

	if (*head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	prev = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = new;
	}
	*head = prev;
	return (*head);
}

