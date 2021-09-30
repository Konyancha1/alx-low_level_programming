#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for ALX students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
char *opc = (char *) main;
int i, no_bytes;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
no_bytes = atoi(argv[1]);
if (no_bytes < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < no_bytes; i++)
{
printf("%02x", opc[i] & 0xFF);
if (i != no_bytes - 1)
printf(" ");
}
printf("\n");
return (0);
}
