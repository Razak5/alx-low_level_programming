#include "main.h"
/**
 * _memset - fill a block of memory with a specofoc value
 * @s: beginning of address
 * @b: value
 * @n: number of bytes
 * Return: array changed with new value n.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

