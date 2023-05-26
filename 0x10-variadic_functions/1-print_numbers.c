#include <stdio.h>

#include <stdarg.h>

#include "variadic_functions.h"

/**
	 * print_numbers - will print numbers followed by a new line.
	 * @separator: string between numbers.
	 * @n: integers passed to function.
	 * @...: signifies variable argument of numbers.
	 */


void print_numbers(const char *separator, const unsigned int n, ...)

{

va_list mynums;
unsigned int i;

va_start(mynums, n);

/*accessing all members of list*/

for (i = 0; i < n; i++)

{

printf("%d", va_arg(mynums, int));



if (i != (n - 1) && separator != NULL)

printf("%s", separator);

}



printf("\n");

va_end(mynums);

}
