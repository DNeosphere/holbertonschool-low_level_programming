 #include "holberton.h"
/**
 * swap_int - swaps the value of two integers
 * @a: pointer to integer a
 * @b: pointer to integer b
 *
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
