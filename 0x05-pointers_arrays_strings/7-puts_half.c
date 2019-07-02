#include "holberton.h"
/**
 * print_rev - prints a reversed string
 * @s: pointer to the string
 *
 */
void puts_half(char *str)
{
int a;
int b;
int c;

a = 0;
	while (str[a] != 0)
	{
	a++;
	}
	if (a % 2 == 0)
		{
		a = a / 2;
		for (b = a; str[b] != '\0'; b++)
			{
			_putchar(str[b]);
			}
		}
	else if (a % 2 != 0)
		{
		a = (a - 1) / 2;
		for (c = a; str[c] != '\0'; c++)
			{
			_putchar(str[c]);
			}
		}
_putchar('\n');
}
