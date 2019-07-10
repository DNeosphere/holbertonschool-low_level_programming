#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: pointer
 * @size: size of the matrix
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
