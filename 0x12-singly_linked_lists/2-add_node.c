#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the beginning of the list
 * @head: the pointer to the head of the list
 * @str: the sstring to be added to the beginning of the list
 * Return: Address of new element otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
