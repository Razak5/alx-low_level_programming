#include <stdio.h>

/**
 * main- prints all possible combinations of 2-digit numbers.
 * Return: Always (Success)
 *
 */

int main(void)
{
int numa;
int numb;

for (numa = '0'; numa < '9'; numa++)
{
for (numb = numa + 1; numb <= '9'; numb++)
{
if (numb != numa)
{
putchar(numa);
putchar(numb);
if (numa == '8' && numb == '9')

continue;

putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
