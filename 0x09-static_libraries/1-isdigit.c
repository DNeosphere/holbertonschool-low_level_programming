#include "holberton.h"
/**
 * _isdigit - checks if c is a digit
 * @c: input to be checked
 * Return: 1 if digit, 0 if not
 *
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
