#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name  with function pointer
 * @name: string
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
