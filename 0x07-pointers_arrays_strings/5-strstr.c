#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to he searched
 * @accept: prefix substring
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
char *_strstr(char *h, char *n)
{
int a, b, c;
a = 0;
	while (h[a] != '\0')
	{
	b = 0;
	c = a;
		while (h[a] == n[b] && h[a] != '\0'&& n[b] != '\0')
			{
				a++;
				b++;
			}
		if (n[b] == '\0')
			return (h + c);
		a = c + 1;
	}
return (0);
}
