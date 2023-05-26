#include <stdio.h>
#include "main.h"

/**
 * print_binary - will print the binary representation of a number.
 * @n: the number we are printing in binary form
 */

void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int num1;

	for (i = 63; i >= 0; i--)

	{
		num1 = n >> i;

		if (num1 & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}

	if (!num)
		_putchar('0');
}
