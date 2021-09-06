#include "main.h"
/**
 * puts_half - prints half of a string 
 * followed by a new line.
 * @str: input string
 * return: no return
 */
void puts_half(char *str)
{
int size = 0, a;
while (size >= 0)
{
if (str[size] == '\0')
break;
size++;
}
if (size % 2 == 1)
a = size / 2;
else
a = (size - 1) / 2;
for (a++; a < size; a++)
_putchar(str[a]);
_putchar('\n');
}
