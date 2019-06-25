#include "holberton.h"
/**
 * print_sign - prints signs of numbers if positive, negative or zero
 * @n: - is the number
 * Return: 1 if positiv, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
if (n > '0')
{
_putchar('+');
return (1);
}
else if (n < '0')
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
