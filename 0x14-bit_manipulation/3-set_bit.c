#include "holberton.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > sizeof(unsigned long) * 8)
		return (-1);
	else 
	{
		num = 1 << index;
		*n = *n | num;
		return (1);
	}
}
