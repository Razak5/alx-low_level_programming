#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{
	char *ptrvar;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;


ptrvar = malloc(sizeof(char) * (i + 1));

	if (ptrvar == NULL)
		return (NULL);


	for (r = 0; str[r]; r++)

		ptrvar[r] = str[r];

	return (ptrvar);

}

