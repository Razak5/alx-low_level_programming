#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - will convert binary number to unsigned int.
 * @b: where the binary number is.
 * Return: decimal value.
 */

unsigned int  binary_to_uint(const char *b)
{
	int i;
	unsigned int base10_num  = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		base10_num =  2 * base10_num + (b[i] - '0');
	}

	return (base10_num);
}
