#include "main.h"
/**
 * print_last_digit - print last digit number
 * @number: all numbers
 * Return: value of last digit
 */
int print_last_digit(int number)
{
	int last_digit = (number % 10);

	_putchar('0' + last_digit);

	return (last_digit);

}
