#include <stdio.h>
/**
 * main - prints numbers from 1 to 100, replaces multiples of 3 for fiz
 * 5 for buzz, and of both for FizzBuzz
 * Return: 0
 */
int main(void)
{
int num;
	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
		{
		printf("Buzz\n");
		break;
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
		printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
		printf("Buzz ");
		}
		else
		{
		printf("%d ", num);
		}
	}
return (0);
}
