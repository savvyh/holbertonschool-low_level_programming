#include "main.h"
/**
 * print_numbers - print the number 0 to 9
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number + '0');
	}
		_putchar('\n');
}
