#include "holberton.h"
/**
 * is_palindrome - checks whether a string is palindrome
 * @s: pointer to the string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (fx3pali(s, s + _strlen_recursion(s) - 1));
}


/**
 * fx3pali- finds a palindrome
 * @s: pointer to the string
 * @p: pointer to check the last position of the string
 * Return: 1 if palindrome, 0 if not
 */

int fx3pali(char *s, char *p)
{
	if (*s != *p)
		return (0);
	else if (s >= p)
		return (1);
	else
		return (fx3pali(s + 1, p - 1));
}
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
