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
	int i;
	listint_t *temp, *new;

	if (head == NULL || *head == NULL)
		return (-1);
	new = (*head)->next;
	temp = *head;

	if (index == 0)
	{
		free(temp);
		*head = new;
		return (1);
	}
	if (new)
	{
		new = new->next;
		for (i = 1; i < index && new; i++)
		{
			temp = temp->next;
			new = new->next;
		}
		if (i == index)
		{
			free(temp->next);
			temp->next = new;
			return (1);
		}
		return (-1);
	}
}
