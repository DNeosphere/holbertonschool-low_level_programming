#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the matrix
 */
void print_chessboard(char (*a)[8])
{
int x, b;
	for (x = 0; x < 8; x++)
	{
		for (b = 0; b < 8; b++)
		{
		_putchar(*(*(x + a) + b));
		}
	_putchar('\n');
	}
}
