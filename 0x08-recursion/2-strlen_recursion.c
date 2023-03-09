#include "main.h"
/**
 * _strlen_recursion - Returns length of a string.
 * @s: string.
 *
 * Return: The length of string.
 */
int _strlen_recursion(char *s)
{
	int word = 0;

	if (*s)
	{
		word++;
		word += _strlen_recursion(s + 1);
	}

	return (word);
}
