#include <stdio.h>
/**
 * main -print number of args passed to program
 * @argc: argument count
 * @argv: array of pointer to char
 * Return: zero
 */

int main(int argc, char *argv[])

{
	(void) argv;
		printf("%d\n", argc - 1);

return (0);
}
