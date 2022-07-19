#include "main.h"

/**
 * print_chessboard - functiion to print chessboard
 *
 * @a: an array of pointers
 */
void print_chessboard(char (*a)[8])
{
	int row, colums;

	for (row = 0; row < 8; row++)
	{
		for (colums = 0; colums < 8; colums++)
		{
			_putchar(a[row][colums]);
		}
		_putchar('\n');
	}
}
