#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */

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
