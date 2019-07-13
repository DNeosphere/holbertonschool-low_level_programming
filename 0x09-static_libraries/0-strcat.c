#include "holberton.h"
/**
 * _strcat - concatenates a stringo at the end of other
 * @dest: destiny string
 * @src: source string
 * Return: destiny strint with the other added
 */
char *_strcat(char *dest, char *src)
{
int a; /* loop to iterate the dest string */
int n; /* last position of the destiny string */
int b; /* loop to iterate the string to be added */
int x; /* counter to iterate the source string while added */
n = 0;
x = 0;
	for (a = 0; dest[a] != '\0'; a++)
	{
	n++;
	}
	for (b = n; src[b - n] != '\0'; b++)
	{
	dest[b] = src[x];
	x++;
	}
dest[b] = '\0';
return (dest);
}
