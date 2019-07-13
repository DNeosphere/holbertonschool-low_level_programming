#include "holberton.h"
/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
 */
int _strlen(char *s)
{
int a;
int len;
for (a = 0; s[a] != '\0'; a++)
{
len++;
}
return (a);
}
