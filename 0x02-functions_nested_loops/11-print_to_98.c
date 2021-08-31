#include "main.h"
#include <stdio.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  print_to_98(0);
  print_to_98(98);
  print_to_98(111);
  print_to_98(81);
  print_to_98(-10);
  return (0);
}
void print_to_98(int n)
{
  if (n > 98)
    {
      for (; n > 98; n--)
	{
	  printf("%d, ", n);
	}
    }
  else if (n < 98)
    {
      for (; n < 98; n++)
	{
	  printf("%d, ", n);
	}
    }
  printf("%d\n", n);
}
