#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A double pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h;
	listint_t *fast = *h;
	size_t node_count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		// Check if there is a loop
		if (slow == fast)
		{
			// Reset slow to the head and move both slow and fast one step at a time
			slow = *h;
			while (slow != fast)
			{
				// Temporarily store the next node
				listint_t *temp = slow->next;

				// Free the current node
				free(slow);
				node_count++;

				// Move slow to the next node
				slow = temp;
			}

			// Free the node where the loop starts
			free(slow);
			node_count++;

			// Set the head to NULL to avoid accessing freed memory
			*h = NULL;

			return (node_count);
		}

		// Temporarily store the next node
		listint_t *temp = slow->next;

		// Free the current node
		free(slow);
		node_count++;

		// Move slow to the next node
		slow = temp;
	}

	// Free any remaining nodes after the loop or in a non-looping list
	while (slow != NULL)
	{
		// Temporarily store the next node
		listint_t *temp = slow->next;

		// Free the current node
		free(slow);
		node_count++;

		// Move slow to the next node
		slow = temp;
	}

	// Set the head to NULL to avoid accessing freed memory
	*h = NULL;

	return (node_count);
}

