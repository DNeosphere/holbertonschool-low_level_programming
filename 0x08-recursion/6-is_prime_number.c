#include "holberton.h"
/**
 * is_prime_number - checks whether a number is prime or not
 * @n: the number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <=  1)
		return (0);
	return (fprime(n, 2));
}
/**
 * fprime - checks whether a number is prime or not
 * @n: given number
 * @x: iterator to divide
 * Return: 1 if prime, cero if not
 */

int fprime(int n, int x)
{
	if ((n != x) && (n % x == 0))
		return (0);
	else if (n == x)
		return (1);
	return (fprime(n, x + 1));
}
