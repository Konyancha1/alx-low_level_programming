#include "main.h"
/**
 * main - check the code for ALX School students.
 *print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
void print_alphabet_x10(void)
{
int a, b;

for (a = 0; a <= 9; a++)
{
for (b = 97; b <= 122; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
