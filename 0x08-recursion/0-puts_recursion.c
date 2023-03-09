#include "main.h"
/**
 * _puts_recursion -prints a string followed by a new line
 * @str: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *str)
{
	if (*str)
	{	_putchar(*str)
		_puts_recursions(str + 1);
	}
	else
		_putchar('\n');
	}
}


