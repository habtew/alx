#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at a specified index in a linked list.
 * @head: A double pointer to the head of the linked list.
 * @index: The index of the node to be deleted. Indexing starts from 0.
 * Return: On successful deletion, the function returns 1. If the index is out
 * of range or the list is empty, the function returns -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int count = 0;
    listint_t *current = *head;
    listint_t *prev = NULL;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = (*head)->next;
        free(current);
        return (1);
    }
    while (current != NULL)
    {
        if (count == index)
        {
            prev->next = current->next;
            free(current);
            return (1);
        }

        prev = current;
        current = current->next;
        count++;
    }

    return (-1);
}

