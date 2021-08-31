#include "main.h"
/**
 * main - check the code for ALX School students.
 * print_alphabet - Prints the alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
int i;

for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
