#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - will delete head node of ll
 * @head: pointer to first element in ll
 * Return: elements data , else return 0 if empty
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;

	int count;

	if (!*head || !head)
		return (0);

	count = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}

