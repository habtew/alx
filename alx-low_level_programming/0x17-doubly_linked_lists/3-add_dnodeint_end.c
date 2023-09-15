#include "lists.h"


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	current = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;

		return (new);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	new->prev = current;
	current->next = new;
	return (new);
}
