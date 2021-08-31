#include "main.h"
#include <stdio.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 * _abs - Computes the absolute value
 * of an integer.
 *
 * @i: input number as an integer.
 *
 * Return: ab
 */
int main(void)
{
int r;

r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
int _abs(int i)
{
  if (i >= 0)
    {
      return (i);
    }
  else
    {
      return (i *= -1);
    }
}

	
  
