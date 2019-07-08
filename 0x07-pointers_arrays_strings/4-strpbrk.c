#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: This is the C string containing the characters to match
 * Return:  a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int a;
int b;
	for (a = 0; s[a] != 0; a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
			{
				return ((s + a));
			}
		}
	}
return ((s + a));
}
