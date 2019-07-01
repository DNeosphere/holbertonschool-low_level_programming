#include "holberton.h"
/**
 * _isdigit - checks if c is a digit
 * @c: input to be checked
 * Return: 1 if digit, 0 if not
 *
 */
int _strlen(char *s)
{
int a;
int len;
for(a = 0; s[a] != '\0'; a++)
{
len++;
} 
return (a);
}

