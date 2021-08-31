#include "main.h"
/**
 * _isalpha - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @c: The character in ASCII code
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
