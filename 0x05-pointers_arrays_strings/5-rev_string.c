#include "holberton.h"
/**
 * rev_string - prints a reversed string
 * @s: pointer to the string
 *
 */
void rev_string(char *s)
{
int a;
char buff[500];
int b;
int x;
a = 0;
x = 0;
	while (s[a] != 0)
	{
	a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
	buff[x] = s[b];
	x++;
	}
	for (b = 0; s[b] != '\0'; b++)
	{
	s[b] = buff[b];
	}
}
