#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
