#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees memory and sets head to null
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
