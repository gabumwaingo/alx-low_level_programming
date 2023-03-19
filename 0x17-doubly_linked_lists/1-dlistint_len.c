#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - prints number of elements in a list
 * @h: pointer to the head of the list
 * Return: number of elemnts in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
