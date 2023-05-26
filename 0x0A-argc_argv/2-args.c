#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints all args recieved
 * @argc: argument count
 * @argv: array of pointer to char
 * Return: zero
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)

{
printf("%s\n", argv[i]);

}

return (0);
}
