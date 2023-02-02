#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at a specified position
 * @head: pointer to header
 * @index: position of the node
 * Return: 1 if success -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *new;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	new = temp->next;
	temp->next = new->next;
	free(new);
	return (1);
}
