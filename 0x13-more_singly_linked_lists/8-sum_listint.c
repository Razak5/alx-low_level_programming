#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - xalculates sum of all data in list
 * @head: first node in list
 * Return: total sum;
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
