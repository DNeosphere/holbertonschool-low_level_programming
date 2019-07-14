#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the executable file with argc, argv
 * @argc: number of arguments of the command line
 * @argv: array of strings coitaining the arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	unsigned int n, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; *(*(argv + a) + b) != '\0' ; b++)
		{
			if (*(*(argv + a) + b) < 48 || *(*(argv + a) + b) > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	n = atoi(*(argv + a));
	sum += n;
	}
	printf("%d\n", sum);
	return (sum);
}
