#include "main.h"
#include <stdio.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  print_times_table(3);
  _putchar('\n');
  print_times_table(5);
  _putchar('\n');
  print_times_table(98);
  _putchar('\n');
  print_times_table(12);
  return (0);
}
void print_times_table(int n)
{
  int a, b, c;
  
  if (n >= 0 && n <= 15)
    {
      for (a = 0; a <= n; a++)
	{
	  _putchar(48);
	  for (b = 1;b <= n;b++)
	    {
	      c = a * b;
	      _putchar(44);
	      _putchar(32);
	      if (c <= 9)
		{
		  _putchar(32);
		  _putchar(32);
		  _putchar(c + 48);
		}
	      else if (c <= 99)
		{
		  _putchar(32);
		  _putchar((c / 10) + 48);
		  _putchar((c % 10) + 48);
		}
	      else
		{
		  _putchar(((c / 100) % 100) + 48);
		  _putchar(((c / 10) % 10) + 48);
		  _putchar((c % 10) + 48);
		}
	      _putchar('\n');
	    }
	}
    }
}

			   
	      
	       
	  
	  
	  
