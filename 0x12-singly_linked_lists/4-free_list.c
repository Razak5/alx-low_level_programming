#include <stdio.h>
#include "lists.h"
/**
 * free_list - will free linked list
 * @head: the list to be freed
 */
void free_list(list_t *head)
{
	list_t *tempnode;

	while (head != NULL)
	{
		tempnode = head->next;
		free(head->str);
		free(head);
		head = tempnode;
	}
}
