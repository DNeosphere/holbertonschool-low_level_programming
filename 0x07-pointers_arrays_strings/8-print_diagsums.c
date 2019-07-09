#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int ciclo, sum1, sum2;
sum1 = 0;
sum2 = 0;
	for (ciclo = 0; ciclo < size; ciclo++)
	{
	sum1 += *(a + (size * ciclo + ciclo));
	sum2 += *(a + (size * ciclo + size - 1 - ciclo));
	}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
