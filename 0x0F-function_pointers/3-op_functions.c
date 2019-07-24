#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds to integers
 * @a: number 1
 * @b: number 2
 * Return: the result of operation
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtractes two integers
 * @a: number 1
 * @b: number 2
 * Return: the result of operation
 **/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: number 1
 * @b: number 2
 * Return: the result of operation
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides to integers
 * @a: number 1
 * @b: number 2
 * Return: the result of operation
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - finds module of wto integers
 * @a: number 1
 * @b: number 2
 * Return: the result of operation
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
