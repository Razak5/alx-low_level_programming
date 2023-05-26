#include <stdio.h>
#include "main.h"

/**
 * clear_bit - will set bit value to zero
 * @n: pointer to number
 * @index: index of bit we want to clear
 * Return: 1 if successful, else return -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

const unsigned int MAX_INDEX = sizeof(unsigned long int) * 8 - 1;
	if (index > MAX_INDEX)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

