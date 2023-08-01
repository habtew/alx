#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - funciton to get node at index
 * @head: ead of the node for traversal
 * @index: index of the nodee
 * Return: returns node if exist or nnnull
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
