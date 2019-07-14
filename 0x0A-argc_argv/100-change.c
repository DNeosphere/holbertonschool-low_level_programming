#include <stdio.h>
#include <stdlib.h>
/**
 * coins - transforms a number into coins (25, 10, 5, 2, 1)
 * @x: number to trasnform
 * Return: the amount of coins needed to express that number
 */
int coins(int x);
/**
 * main - transforms a number into cent coins
 * @argc: number of arguments of the command line
 * @argv: array of strings coitaining the arguments.
 * Return: 1 if argc < 2, 0 if the value of argc is negative
 * or the amount of coins needed to express a number
 */
int main(int argc, char *argv[])
{
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		printf("%d\n", coins(money));
		return (0);
	}
}
/**
 * coins - transforms a number into coins (25, 10, 5, 2, 1)
 * @x: number to trasnform
 * Return: the amount of coins needed to express that number
 */
int coins(int x)
{
	if (x == 0)
		return (0);
	else if (x / 25 > 0)
		return (coins(x % 25) + x / 25);
	else if (x / 10 > 0)
		return (coins(x % 10) + x / 10);
	else if (x / 5 > 0)
		return (coins(x % 5) + x / 5);
	else if (x / 2 > 0)
		return (coins(x % 2) + x / 2);
	else if (x / 1 > 0)
		return (coins(x % 1) + x / 1);
	return (0);
}
