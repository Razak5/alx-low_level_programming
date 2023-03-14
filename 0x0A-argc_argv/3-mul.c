#include <stdio.h>

#include <stdlib.h>

/**
 * main -prints the product of argv[1] and argv[2]
 * @argc: argument count
 * @argv: array of pointer to char
 * Return: zero
 */

int main(int argc, char *argv[])
{

	int i;

	int mult;

	int num1;

	int num2;

if (argc < 3 || argc > 3)

{

	printf("Error\n");

	return (1);

}

	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);



	mult = num1 * num2;

	printf("%d\n", mult);

return (0);

}
