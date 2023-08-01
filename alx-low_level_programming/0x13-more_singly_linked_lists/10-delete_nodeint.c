#include "lists.h"
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = *head;

	if (idx == 0)
	{
		current = current->next;
		free(*head);
		*head = current;
		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			current = (*head)->next;
			free(*head);
			*head = current;
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}

