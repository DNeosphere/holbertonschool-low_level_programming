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
/*int b;*/
int c;
int flag;
int count;
count = 0;
flag = 0;
for (a = 0; s[a] != '\0'; a++)
	{
	flag = 0;
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[a] == accept[c])
			{
			count++;
			flag = 1;
			}
		}
if (flag == 0)
	{
	break;
	}
}
return (count);
}
