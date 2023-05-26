#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at select position of ll
 * @head: pointer to first node of ll
 * @idx: index of  where new node will be added
 * @n: data for new node
 *
 * Return: pointer to new node else return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (count = 0; temp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

