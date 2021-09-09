#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: the pointer to dest
 */
char *leet(char *s)
{
  int size, a;
  int small_letters[] = {97, 101, 111, 116, 108};
  int upp_letters[] = {65, 69, 79, 84, 76};
  int numbers[] = {52,51,48,55,49};

  while (*(s + size) != '\0')
    {
      for (a = 0; a < 5; a++)
	{
	  if (*(s + size) == small_letters[a] || *(s + size) == upp_letters[a])
	    {
	      *(s + size) = numbers[a];
	      break;
	    }
	}
      size++;
    }
  return (s);
}
