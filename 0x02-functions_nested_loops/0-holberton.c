#include "main.h"
/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
int count, sz;

sz = sizeof(a) / sizeof(int);
for (count = 0; count < sz; count++)
{
_putchar(a[count]);
}
_putchar('\n');
return (0);
}
