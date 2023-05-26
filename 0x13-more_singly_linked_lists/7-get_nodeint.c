#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - will return node at a particular index
 * @head: first node in ll
 * @index: node index to return
 * Return: pointer to the particular node, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}

