#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	// Traverse the list using Floyd's cycle detection algorithm
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		// If there is a loop, the fast pointer will catch up with the slow pointer
		if (slow == fast)
		{
			// Reset the slow pointer to the head
			slow = head;

			// Move both pointers one step at a time until they meet again
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			// Return the address of the node where the loop starts
			return slow;
		}
	}

	// If no loop is found, return NULL
	return NULL;
}

