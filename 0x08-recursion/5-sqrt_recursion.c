#include "main.h"
/**
 * actual_sqrt_recursion - finds natural sqaure root
 * @n: number to c
 * @i: this will iterate
 *
 * Return: square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
