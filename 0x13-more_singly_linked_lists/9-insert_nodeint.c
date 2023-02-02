#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to the head of the list
 * @idx: where the node should be added
 * @n: the value of the node to be inserted
 * Return: address of inserted node or NULL if failure occurs
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (idx != 0)
	{
		i = 0;
		while (i < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
			new->next = temp->next;
			temp->next = new;
		}
		if (temp == NULL)
			return (NULL);
	}
	return (new);
}
