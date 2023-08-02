#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t node_count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		// Check if there is a loop
		if (slow == fast)
		{
			// Reset slow to the head and move both slow and fast one step at a time
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				fast = fast->next;
			}

			// Print the last node of the loop to indicate the cycle
			printf("[%p] %d\n", (void *)slow, slow->n);

			// Exit the program with status 98 (as specified)
			exit(98);
		}

		node_count++;
	}

	// Print any remaining nodes after the loop or in a non-looping list
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		node_count++;
	}

	return (node_count);
}

