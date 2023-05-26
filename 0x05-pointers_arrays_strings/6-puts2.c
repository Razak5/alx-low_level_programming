#include "main.h"
/**
 * puts2 - starting from fist character, print other character
 * then a new line
 * @str: the input
 * Return: print
 */
void puts2(char *str)
{
	int word = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		word++;
	}
	t = word - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		putchar(str[o]);
	}
	}
	putchar('\n');
}

