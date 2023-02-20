#include <stdio.h>

/**
 * main- prints lowercase letters followed by a new line
 * Return: Always (Success)
 *
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar ('\n');

	return (0);
}

