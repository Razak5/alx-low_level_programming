#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
	/**
	 * main - Adds positive numbers
	 * checkNo - to check fri digit in string
	 * @str: the array of string
	 * @argc: count arguments
	 * @argv: the arguments
	 * Return: Always 0 (Success)
         * Return: Always 0 (Success)
         */
	int checkNo(char *str)
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

	int main(int argc, char *argv[])

	{

		int count;
		int conv_to_int;
		int sum = 0;

		count = 1;
		while (count < argc)
		{
			if (checkNo(argv[count]))

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
