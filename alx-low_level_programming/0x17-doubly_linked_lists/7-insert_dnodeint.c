#include "lists.h"


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;
	unsigned int index = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			(*h) = new;
			return (new);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (current->next != NULL && index != idx)
	{
		current = current->next;
		index++;
	}
	if (index == idx)
	{
		new->prev = current;
		new->next = current->next;
		if (current->next != NULL)
			current->next->prev = new;
		current->next = new;
		return (new);
	}
	return (NULL);
}
