#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_no - check if string is digit
 * @str: the array string
 * Return: Always 0 (Success)
 */

int check_no(char *str)

	{
		unsigned int count;

		count = 0;
		while (count < strlen(str))

		{
			if (!isdigit(str[count]))
			{
				return (0);
			}

			count++;
		}
		return (1);
	}
/**
 * main - print positive numbers
 * @argc: argument count
 * @argv: the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

	{

		int count;
		int conv_to_int;
		int sum = 0;

		count = 1;
		while (count < argc)
		{
			if (check_no(argv[count]))

			{
				conv_to_int = atoi(argv[count]);
				sum += conv_to_int;
			}

			else
			{
				printf("Error\n");
				return (1);
			}

			count++;
		}

printf("%d\n", sum);

return (0);
	}
