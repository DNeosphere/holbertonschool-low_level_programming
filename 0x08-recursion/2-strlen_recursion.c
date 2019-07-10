#include "holberton.h"
/**
 * _strlen_recursion - finds the length of a string recursively
 * @s: pointer to the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
