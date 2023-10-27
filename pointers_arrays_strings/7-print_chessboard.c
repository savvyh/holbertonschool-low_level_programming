#include "main.h"
/**
 * print_chessboard - print the chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; a[row][7]; row++)
	{
		for (column = 0; a[column][7]; column++)
		{
			_putchar(a[row][column]);
		}
	_putchar('\n');
	}
}
