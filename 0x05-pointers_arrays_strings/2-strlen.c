#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: string  length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi += 1;
		s += 1;
	}

	return (longi);
}

