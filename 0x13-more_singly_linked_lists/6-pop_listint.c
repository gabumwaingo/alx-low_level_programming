#include "lists.h"
#include "stdlib.h"

/**
 * pop_listint - deletes head node
 * @head: the pointer to head node
 * Return: data of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
