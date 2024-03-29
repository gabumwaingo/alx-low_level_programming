#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints elements of list_t list
 * @h: the identifier of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
