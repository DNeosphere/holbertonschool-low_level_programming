#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - does basic operations with two integers
 * @argv: argument value array
 * @argc: argument counter
 * Return: the result of operation
 **/
int main(int argc, char *argv[])
{
	int num1, num2, op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", op);
	return (0);
}
