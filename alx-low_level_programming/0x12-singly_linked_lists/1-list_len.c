#include "lists.h"
#include <stdlib.h>


size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);

}
