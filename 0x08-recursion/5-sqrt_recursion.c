#include "main.h"

int main_sqrt_recurs(int n, int i);

/**
 * _sqrt_recursion - return natural sqrt of a number
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recurs(n, 0));
}

/**
 * main_sqrt_recurs - recurses to find the natural
 * square root of a number
 * @n: number
 * @i: this will iterate
 *
 * Return: square root
 */
int main_sqrt_recurs(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (main_sqrt_recurs(n, i + 1));
}
