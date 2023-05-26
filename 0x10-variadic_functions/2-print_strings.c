#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - will print strings and then a new line.
 * @separator: this separates the strings
 * @n: number of strings passed
 * @...: signifies a variable number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mystr;

	unsigned int i;

	va_start(mystr, n);

	for (i = 0; i < n; i++)
	{
	printf("%s", va_arg(mystr, char *));

	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");

	va_end(mystr);
}

