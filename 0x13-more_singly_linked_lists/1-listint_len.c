#include "lists.h"
#include <stdio.h>

/**
 * listint_len - gives the number of elements in the list
 * @h: pointer to the head of the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
