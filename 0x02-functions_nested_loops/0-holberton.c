#include "main.h"
/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int a[] = {95, 112, 117, 116, 99, 104, 97, 114};
int count, sz;

sz = sizeof(a) / sizeof(int);
for (count = 0; count < sz; count++)
{
_putchar(a[count]);
}
_putchar('\n');
return (0);
}
