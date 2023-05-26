#include <stdio.h>

/**
 * main- prints alphabets in reverse order
 * Return: Always (Success)
 *
 */

int main(void)
{
char alpha;
for (alpha = 'z'; alpha >= 'a'; alpha--)
{
putchar(alpha);
}
putchar ('\n');

return (0);
}
