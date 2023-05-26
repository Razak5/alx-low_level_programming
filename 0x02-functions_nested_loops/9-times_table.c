#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0
 * Return: a times table
 * "col" means column the word "row" remains the same
 */

void times_table(void)
{
int row, col, k;

for (row = 0; row < 10; row++)
{
for (col = 0; col < 10; col++)
{
k = col * row;
if (col == 0)
{
_putchar(k + '0');
}
if (k < 10 && col != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else if (k >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}
}

