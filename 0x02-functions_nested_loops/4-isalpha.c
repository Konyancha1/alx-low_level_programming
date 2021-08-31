#include "main.h"
/**
 * isalpha - shows 1 if lowercase or uppercase letter is present
 * shows 0 if otherwise
 *
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
