#include "main.h"
/**
 *_isupper - check for uppercase letters.
 *@c: character to be checked
 * Return: 1 if uppercase and 0 if not uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

