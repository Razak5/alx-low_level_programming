#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - will add node at end of list
 * @head: pointer to first element
 * @n: data for new element
 * Return: pointer to newnode, else return NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->next = NULL;

		if (*head == NULL)
		{
			*head = newnode;
			return (newnode);
		}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;
	return (newnode);
}

