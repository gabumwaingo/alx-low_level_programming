#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - adds the values of list elements
 * @head: pointer to the head of the list
 * Return: 0 if list is empty sum of elements otherwise
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	temp = head;

	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
