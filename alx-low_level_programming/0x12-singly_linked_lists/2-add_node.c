#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if(new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
}
