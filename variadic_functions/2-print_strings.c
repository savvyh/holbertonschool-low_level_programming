#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print two strings
 * @separator: a comma which separate the string
 * @n: number of string passed to the function
 * Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *string;
	va_list arguments;

	va_start(arguments, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(arguments, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && index < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(arguments);
}
