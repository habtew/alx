#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx = 0;

	if (head == NULL)
		return NULL;

	current = head;

	while (current && idx != index)
	{
		idx++;
		current  = current->next;
	}

	return current;
}
