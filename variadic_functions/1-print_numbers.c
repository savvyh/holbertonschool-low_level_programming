#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print number
 * @separator: the string to be printed, a comma
 * @n: number of integers passed to the function
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list arguments;

	va_start(arguments, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(arguments, int));

		if (separator != NULL && index < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(arguments);
}
