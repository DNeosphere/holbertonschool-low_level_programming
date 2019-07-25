#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: arguments counter
 * @argv: arguments values
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int byamount;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byamount = atoi(argv[1]);

	if (byamount < 0)
	{
	printf("Error\n");
	exit(2);
	}



	return (0);

}
