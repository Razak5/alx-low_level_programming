#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - will delete node at certain index in ll
 * @head: pointer to first element in ll
 * @index: index of node we want to delete
 *
 * Return: 1 (Success), or -1 on Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *my_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	my_node = temp->next;
	temp->next = my_node->next;
	free(my_node);

	return (1);
}

