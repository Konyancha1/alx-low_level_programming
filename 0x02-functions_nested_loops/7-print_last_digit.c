#include "main.h"
#include <stdio.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
int print_last_digit(int a)
{
  int b;
  b = a % 10;
  if (b < 0)
    {
      _putchar(-b + 48);
      return (-b);
    }
  else
    {
      _putchar(b + 48);
      return (b);
    }
}
