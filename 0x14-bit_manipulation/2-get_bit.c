#include <stdio.h>
#include "main.h"

/**
 * get_bit - will return bit value at an index of base 10 number
 * @n: number we are looking for
 * @index: index where bit is
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bitValue;

if (index > 63)
	return (-1);

bitValue = (n >> index) & 1;

return (bitValue);
}

