#include "main.h"
/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int multiple;
	int figure;
	int result;

	for (multiple = 0; multiple <= 9; multiple++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (figure = 1; figure <= 9; figure++)
		{
			result = multiple * figure;

				if (result < 10)
				{
					_putchar(' ');
					_putchar(result + '0');
			}
			else
			{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
			}

			if (figure < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
