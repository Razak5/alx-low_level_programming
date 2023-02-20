#include <stdio.h>

/**
 * main- prints base 16 numbers
 * Return: Always (Success)
 *
 */

int main(void)
{
int num;
char alpha;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}

for (alpha = 'a'; alpha <= 'f'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
