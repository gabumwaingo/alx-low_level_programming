#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: pointer to head of the list
 * @n: the value of the added node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *temp;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;

	if (head == NULL)
		*head = end;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
	}
	return (end);
}
