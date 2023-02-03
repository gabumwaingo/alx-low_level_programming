#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reversewbtye linked list
 * @head: pointer to head of the list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL || head == NULL)
		return (NULL);

	prev = 0;
	next = *head;

	while (next != NULL)
	{
		next = next->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}

