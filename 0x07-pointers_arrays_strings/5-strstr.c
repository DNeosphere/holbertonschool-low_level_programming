#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to he searched
 * @accept: prefix substring
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
char *_strstr(char *haystack, char *needle)
{
int a, i, flag;
char *address;
i = 0;
flag = 0;

	for (a = 0; haystack[a] != '\0' && flag == 0; a++)
	{
		if (haystack[a] == needle[0])
		{
			while (haystack[a] == needle[i]  haystack[a] != '\0' || needle != '\0')
			{
			a++;
			i++;
			}
		address = haystack + (a - i);
		flag == 1;
		}
	}
return (address);
}
