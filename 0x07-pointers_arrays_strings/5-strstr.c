#include "holberton.h"
/**
 * _strstr - locates a substring.
 * @h: string to he searched
 * @n: prefix substring
 * Return:  a pointer to the beginning of the located substring,
 * NULL if the substring is not found.
 */
char *_strstr(char *h, char *n)
{
int a, b, c;
a = 0;
	while (h[a] != '\0')
	{
		b = 0;
		c = a;
		while (h[a] == n[b] && h[a] != '\0' && n[b] != '\0')
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
