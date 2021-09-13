#include "main.h"
/**
 * _strstr - find the occurrence of the substring
 * needle int the string haystack
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning pf located substring or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *a;
char *b;

while (*haystack != '\0')
{
a = haystack;
b = needle;
while (*haystack != '\0' && *b != '\0' && *haystack == *b)
{
haystack++;
b++;
}
if (!*b)
return (a);
haystack = a + 1;
}
return (0);
}
