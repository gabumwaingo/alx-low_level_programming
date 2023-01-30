#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - prints number of elements in a list
 * @h: the pointer to the head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
