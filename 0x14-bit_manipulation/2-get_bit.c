#include "holberton.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @index: index to look for
 * @n: number
 * Return: value of the bit, -1 if failed;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
