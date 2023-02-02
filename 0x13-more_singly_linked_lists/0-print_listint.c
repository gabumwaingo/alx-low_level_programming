#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of the list
 * @h: the pointer to the head
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
