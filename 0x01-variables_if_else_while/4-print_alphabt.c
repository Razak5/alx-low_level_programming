#include <stdio.h>

/**
 * main- prints letters escept p and e
 * Return: Always (Success)
 *
 */

int main(void)
{
char letters;

for (letters = 'a'; letters <= 'z'; letters++)
{
if (letters == 'q' || letters == 'e')
	continue;
putchar(letters);
}

putchar('\n');
return (0);
}
