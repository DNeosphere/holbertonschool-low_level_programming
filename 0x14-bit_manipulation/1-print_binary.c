#include "holberton.h"
/**
 * print_binary - prints a binary from a decimal
 * @n: number to print
 **/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	else
	{
		if (n >> 1)
		print_binary(n >> 1);
		_putchar(((n >> 1) & 1) + '0');
	}
}
