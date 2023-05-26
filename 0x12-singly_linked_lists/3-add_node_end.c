#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -will add a new node at the end of a linked list
 * @head: pointer to list_t
 * @str: string: new node
 * Return: address of new element idf successful , else return NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tempnode = *head;
	unsigned int count = 0;

	while (str[count])
		count++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = count;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (tempnode->next)
		tempnode = tempnode->next;

	tempnode->next =  newnode;
	return (newnode);

}

