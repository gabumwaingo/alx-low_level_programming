#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - sums up data in the list
 * @head: pointer to the first pointer
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
