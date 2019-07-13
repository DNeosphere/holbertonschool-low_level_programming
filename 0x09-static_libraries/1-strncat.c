#include "holberton.h"
/**
 * _strncat - adds n chars to a string
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * @n: chars to be added
 * Return: the adress of the destiny string
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
int len;
int x;
x = 0;
len = 0;

for (a = 0; dest[a] != '\0'; a++)
	{
	len++;
	}
for (b = len; (src[x] != '\0' && b < n + len) ; b++)
	{
	dest[b] = src[x];
	x++;
	}
dest[b] = '\0';
return (dest);
}
