#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a - first integer
 * @b - second integer
 * return: no return
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
