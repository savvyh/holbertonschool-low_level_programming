#include "main.h"
/**
 * print_square -  prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int newline, square;

	if (size > 0)
	{
		for (newline = 0; newline < size; newline++)
		{
			for (square = 0; square < size; square++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
