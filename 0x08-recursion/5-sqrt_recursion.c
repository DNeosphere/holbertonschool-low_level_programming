#include "holberton.h"
/**
 * _sqrt_recursion - prints the nature square root of a number
 * @n: the number
 */

int fx2(int n, int x);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (fx2(n, 1));
}

/**
 * fx2 - multiplies a number by it self.
 * @x: number to multiplay
 * @n: number to define if it is the square root of it
 * Return: x if its square root
 */
int fx2(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (fx2(n, x + 1));
	return (-1);
}
