#include "function_pointers.h"

/**
 * int_index - will return index when if statement is true, else returns -1
 * @array: the array
 * @size: size of elements
 * @cmp: pointer oto function in main
 * Return: zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

