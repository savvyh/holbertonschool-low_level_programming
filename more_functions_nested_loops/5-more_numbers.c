#include "main.h"
/**
 * more_numbers - 0 to 14 and 10 times
 */
void more_numbers(void)
{
	int num;
	int repeat;

	for (repeat = 0; repeat <= 9; repeat++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');

			if (num == 14)
			{
				_putchar('\n');
			}
		}
	}
}
