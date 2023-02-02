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

	if (head == NULL)
		return (0);
	temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
