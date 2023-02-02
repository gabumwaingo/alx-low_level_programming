#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - adds the values of list elements
 * @head: pointer to the head of the list
 * Return: 0 if list is empty sum of elements otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
