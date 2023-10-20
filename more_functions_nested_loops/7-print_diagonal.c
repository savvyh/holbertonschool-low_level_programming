#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: number
 */
void print_diagonal(int n)
{
	int newline, space;

	if (n > 0)
	{
		for (newline = 0; newline < n; newline++)
		{
			for (space = 0; space < newline; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
