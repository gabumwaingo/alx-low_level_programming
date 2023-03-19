#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds node at the end
 * @head: pointer to the first node of the list
 * @n: data in the new node
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
	}
	new->n = n;
	temp->next = new;
	new->prev = temp;
	new->next = NULL;
	return (new);
}
