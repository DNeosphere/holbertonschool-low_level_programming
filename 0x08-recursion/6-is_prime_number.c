#include "holberton.h"
/**
 * _sqrt_recursion - prints the nature square root of a number
 * @n: the number
 * Return: aaa
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	return (fprime(n , 1));
}

int fprime (int n, int x)
{
	if (x == n - 1)
		return (1);
	else if (n % n - x)
		return (fprime(n, x + 1));
	return (0);
}
