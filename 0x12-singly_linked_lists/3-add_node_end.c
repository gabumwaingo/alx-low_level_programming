#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node to the end of a linked list
 * @head: pointer to the head of the list
 * @str: the string to be added
 * Return: A pointer to memeory location where the string is stored
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *temp;
	int i = 0;

	if (str == NULL)
		return (NULL);

	last = malloc(sizeof(list_t));
	if (last == NULL)
		return (NULL);
	last->str = strdup(str);
	if (last->str == NULL)
	{
		free(last);
		return (NULL);
	}
	while (str[i])
		i++;

	last->len = i;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = last;

	return (last);
}




