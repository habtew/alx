#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of the list.
 * @head: Pointer to the head of the list.
 * @str: String to be added to the new node.
 * Return: Address of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node, *last_node;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		return (new_node);
	}
}
