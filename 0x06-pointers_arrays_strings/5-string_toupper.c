#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string
 * return: the pointer to dest
 */
char *string_toupper(char *s)
{
	int size = 0;

	while (*(s + size) != '\0')
	{
		if ((*(s + size) >= 97) && (*(s + size) <= 122))
			*(s + size) = *(s + size) - 32;
		size++;
	}

	return (s);
}
