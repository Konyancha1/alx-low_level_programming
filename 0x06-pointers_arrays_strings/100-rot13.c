#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer to dest
 */

char *rot13(char *s)
{
  int size =0, a;
  char alphabet[] = "abcdefghijklmonpqrstuvwxysABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char rot13[] = "nopqrstuvwxtzabcdefghijklmnNOPQRSTUVWXYZABCDEFGHIJKLM";

  while (*(s + size) != '\0')
    {
      for (a = 0; a < 52; a++)
	{
	  if (*(s + size) == alphabet[a])
	    {
	      *(s + size) = rot13[a];
	      break;
	    }
	}
      size++;
    }
  return (s);
}
	
