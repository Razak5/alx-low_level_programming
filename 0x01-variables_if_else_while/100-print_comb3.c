#include <stdio.h>

/**
 * main- prints all possible combinations of 2-digit numbers.
 * Return: Always (Success)
 *
 */

int main(void)
{
int num;
for (num = 0; num <= 89; num++)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
if (num != 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
