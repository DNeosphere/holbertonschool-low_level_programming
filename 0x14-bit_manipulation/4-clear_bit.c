#include "holberton.h"
/**
 * clear_bit - sets a number to 0 in a given index
 * @index: of the bit to change
 * @n: pointer to the number
 * Return: 1 if success, -1 if fails
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long clear;

	if (index > sizeof(unsigned long) * 8)
		return (-1);
	clear = ~(1 << index);
	*n = *n & clear;
	return (1);
}
