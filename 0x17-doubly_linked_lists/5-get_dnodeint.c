#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - gets a node at a specific point
 * @head: pointer to the first node of the list
 * @index: position the node is at in the list
 * Return: pointer to the located node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	temp = head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
