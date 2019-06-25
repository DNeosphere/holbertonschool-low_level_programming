#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: - is the number
 * Return: the last number
 */
int print_last_digit(int n)
{
int n10;
int mod;
int nn;
int pn;
nn = -1;
n10 = 10;
if (n > 0)
{
mod = n % n10;
_putchar (mod + '0');
}
else
{
pn = n * nn;
mod = pn % n10;
_putchar (mod + '0');
}
return (mod);
}
