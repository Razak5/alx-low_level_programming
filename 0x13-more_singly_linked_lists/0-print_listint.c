#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all element of linked list
 * @h: the linked list to print
 * Return: node count
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
