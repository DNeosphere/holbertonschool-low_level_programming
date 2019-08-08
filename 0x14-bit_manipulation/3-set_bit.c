#include "holberton.h"
/**
 * set_bit - sets a bit in a given index to 1
 * @n: pointer to the number
 * @index: index to change
 * Return: 1 if succeess, -1 otherwise
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > sizeof(unsigned long) * 8)
		return (-1);

		num = 1 << index;
		*n = *n | num;
		return (1);
}
