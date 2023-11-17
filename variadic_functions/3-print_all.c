#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - print anything in this function
 * @format: list of types of arguments passed to the function
 * Return: Nothing
*/
void print_all(const char * const format, ...)
{
	va_list arguments;

	format_t format_type[] = {
		{"c", print_a_caracter},
		{"i", print_an_integer},
		{"f", print_a_float},
		{"s", print_a_string_ptr},
	};

	unsigned int index_format = 0;
	unsigned int index_function = 0;
	char *separator = "";

	va_start(arguments, format);

	while (format != NULL && format[index_format])
	{
		index_function = 0;

		while (index_function < 4)
		{
			if (format[index_format] == *format_type[index_function].format_identifier)
			{
				format_type[index_function].function_ptr(separator, arguments);
				separator = ", ";
			}
			index_function++;
		}
		index_format++;
	}

	va_end(arguments);
	printf("\n");
}

/**
 * print_a_caracter - function to print a caracter
 * @separator: a comma to separate the caracter
 * @arguments: list of variadic arguments
*/
void print_a_caracter(char *separator, va_list arguments)
{
	printf("%s%c", separator, va_arg(arguments, int));
}

/**
 * print_an_integer - function to print an integer
 * @separator: a comma to separate the integer
 * @arguments: list of variadic arguments
*/
void print_an_integer(char *separator, va_list arguments)
{
	printf("%s%d", separator, va_arg(arguments, int));
}

/**
 * print_a_float - function to print a float
 * @separator: a comma to separate the float
 * @arguments: list of variadic arguments
*/
void print_a_float(char *separator, va_list arguments)
{
	printf("%s%f", separator, va_arg(arguments, double));
}

/**
 * print_a_string_ptr - function to print a string which is a pointer
 * @separator: a comma to separate the string
 * @arguments: list of variadic arguments
*/
void print_a_string_ptr(char *separator, va_list arguments)
{
	char *string = va_arg(arguments, char *);

	if (string == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, string);
}
