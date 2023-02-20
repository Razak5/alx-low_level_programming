#include <stdio.h>

/**
 * main- prints all single digit base 10 numbers followed by a new line
 * Return: Always (Success)
 *
 */

int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
