#include "holberton.h"
/**
 * _islower -  gets an int value and determinates wheter it is lowercase or not
 * @c: number to check
 * Return: - 0 if lowercase, 1 if something else
 *
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
