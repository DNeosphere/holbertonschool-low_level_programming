#include "holberton.h"
/**
 * print_binary - prints a binary from a decimal
 * @n: number to print
 **/
void print_binary(unsigned long int n)
{
	int index_print, len, number;

	len = 0;
	while (n >> len)
		len++;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if
	/*print the number*/
	for (index_print = len - 1; index_print >= 0; index_print--)
	{
		number = n >> index_print;
		if (number & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
