#include "variadic_functions"
/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *s;

va_list (ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (i < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end (ap);
}
