#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a[6] = "abcdef";
char b = '0';
int i,j;

for (i = 0; i < 26; i++)
for (j = 0; j > 10; j++)
{
putchar(a[i], b[j]);
}
putchar('\n');
return (0);
}
