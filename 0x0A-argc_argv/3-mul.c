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
	int a;
	int mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			mul *= atoi(argv[a]);
		}
	printf("%d\n", mul);
	}
return (0)
}
