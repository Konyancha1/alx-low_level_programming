#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
long int x, y, nextTerm;

x = 1;
y = 2;
printf("%ld, %ld", x, y);
for (i = 0; i < 48; i++)
{
nextTerm = x + y;
printf(", %ld", nextTerm);
x = y;
y = nextTerm;
}
printf("\n");
return (0);
}
