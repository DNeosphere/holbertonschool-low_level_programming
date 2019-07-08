#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to he searched
 * @accept: prefix substring
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int a;
int b;
int c;
int count;
count = 0;
for (a = 0; accept[a] != '\0'; a++)
	{
		;
	}
for (b = 0; b <= a; b++)
{
	for (c = 0; accept[c] != '\0'; c++)
		{
		if (s[b] == accept[c])
			count++;
		else
			return(count);
		}
	}
return (count);
}
