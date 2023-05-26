#include "main.h"
/**
 * _memcpy - this will copy memory area
 * @dest: storage location of memory
 * @src: copied locaton of memory
 * @n: value of n bytes
 * Return: memory copied with changed n value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	int r = 0;
	int i = n;

		for (; r < i; r++)
		{
			dest[r] = src[r];
			n--;
		}
		return (dest);
}
