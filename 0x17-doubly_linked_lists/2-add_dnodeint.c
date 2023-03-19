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
	new->n = n;
	new->prev = 0;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		new->next->prev = new;
		*head = new;
	}
	return (new);
}
