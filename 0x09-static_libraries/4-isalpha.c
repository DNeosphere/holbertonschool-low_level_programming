#include "holberton.h"

/**
 * _isalpha - looks for letters
 * @c: - is the character
 * Return: Always 1 if letter upper or lower.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
