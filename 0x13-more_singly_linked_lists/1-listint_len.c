#include <stdio.h>
#include "lists.h"

/**
 * list_len - will return number of element in linked list
 * @h: the linked list
 * Return: node count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
