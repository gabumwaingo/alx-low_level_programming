#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returnsba node
 * @index: position of the node
 * @head: pointer to head
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	i = 0;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}

