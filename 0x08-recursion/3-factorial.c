#include "holberton.h"
/**
 * factorial - prints the factorial of a number
 * @n: the number
 * Return: factorial, -1 if number negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)	
	{
		return (1);
	}
	else
		return (n * factorial(n -1));
}

