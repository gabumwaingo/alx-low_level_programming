#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds new node at the beginning of the list
 * @head: pointer of head of the list
 * @n: data in the new node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		*head = new;
		if (new->next != NULL)
		{
			new->next->prev = new;
			return (new);
		}
	}
	return (new);
}
