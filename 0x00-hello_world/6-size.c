#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int i;
double d;
char c;
long int li;
long long ll;
float f;

printf("size of a char: %lu.\n", sizeof(c));
printf("size of an int: %lu.\n", sizeof(i));
printf("sinze of a long int: %lu. \n", sizeof(li));
printf("sinze of a long long: %lu. \n", sizeof(ll));
printf("sinze of a float: %lu. \n", sizeof(f));

return (0);
}
