#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: pointer to list_list
 * Return: element count.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
