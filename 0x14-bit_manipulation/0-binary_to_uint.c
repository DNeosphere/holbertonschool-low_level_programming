#include "holberton.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, index, len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	sum = 0;
	index = 0;
	while (b[index])
	{
		if (b[index] == '0' || b[index] == '1')
		{
			if (b[index] == '1')
				sum += 1 * (_pow_recursion(2, len - 1));
			else
				sum += 0;
		index++;
		len--;
		}
		else
			return (0);
	}
return (sum);
}
/**
* _pow_recursion - raises x to the power of y
* @x: integer base
* @y: power
* Return: value of the operation, -1 if y lower than 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
 */
int _strlen(const char *s)
{
int a;
int len;
for (a = 0; s[a] != '\0'; a++)
{
len++;
}
return (a);
}
