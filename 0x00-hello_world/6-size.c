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
long long int ll;
float f;

printf("size of a char: %zu byte(s)\n", sizeof(c));
printf("size of an int: %zu byte(s)\n", sizeof(i));
printf("size of a long int: %zu byte(s)\n", sizeof(li));
printf("size of a long long int: %zu byte(s)\n", sizeof(ll));
printf("size of a float: %zu byte(s)\n", sizeof(f));

return (0);
}
