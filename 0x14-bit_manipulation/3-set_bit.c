#include <stdio.h>
#include "main.h"

/**
 * set_bit - will set bit to 1 at a particular index
 * @n: pointer to the number
 * @index: the index of the bit
 * Return: 1 if successful, else return -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
const unsigned int MAX_INDEX = sizeof(unsigned long int) * 8 - 1;
	if (index > MAX_INDEX)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
