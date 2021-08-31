#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int f1 = 0, f2 = 1;
int nextTerm = 0;
for (i = 3; i < 50; i++)
{
printf("%d, ", nextTerm);
f1 = f2;
f2 = nextTerm;
nextTerm = f1 + f2;
}
return (0);
}
