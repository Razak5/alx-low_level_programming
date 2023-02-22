#include "main.h"
/**
 * main- prints lowercase letters followed by a new line
 * Return: Always (Success)
 *
 */

void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar ('\n');
return (0);
}
