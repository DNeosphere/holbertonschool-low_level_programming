#include "holberton.h"
/**
 * puts2 - prints 1 out of 2 characters of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
int a;
	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
		_putchar(str[a]);
		}
	}
_putchar('\n');
}
