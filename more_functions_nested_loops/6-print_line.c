#include "main.h"
/**
 * print_line - draw a straight line
 * @n: number of times the character should be print
 */
void print_line(int n)
{
	int repeat;

	if (n > 0)
	{
		for (repeat = 0; repeat < n; repeat++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
