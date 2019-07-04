#include "holberton.h"
/**
 * string_toupper - changes all lower case to upper case of a string
 * @s: pointer to the string
 * Return: the string
 */
char *string_toupper(char *s)
{
int a;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
		s[a] -= 32;
		}
	}
return (s);
}
