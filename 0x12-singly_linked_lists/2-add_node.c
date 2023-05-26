#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node at the start of the linked list
 * @head: double pointer to list_t
 * @str: new string
 * Return: if added return address else return NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int count = 0;

	while (str[count])
		count++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = count;
	newnode->next = (*head);
	(*head) = newnode;
return (*head);
}



