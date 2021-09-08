#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src, 
 * including the terminating null byte
 * to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int a = 0; int b = 0;

while (*(dest + a) != '\0')
{
a++;
}
while (b >= 0)
{
*(dest + a) = *(src + b);
if (*(src + b) == '\0')
break;
a++;
b++;
}
return (dest);
}
