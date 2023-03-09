#include "main.h"
int main_prime(int n, int i);

/**
 * is_prime_number - wether an int is prime or not prime
 * @n: we are checking n
 *
 * Return: 1 is returned if n is prime, 0 if its not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime(n, n - 1));
}

/**
 * main_prime - calculate prime
 * @n: we are checking n
 * @i: this will iterate
 *
 * Return: 1 is returned if n is prime, 0 if it isn't.
 */
int main_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (main_prime(n, i - 1));
}
