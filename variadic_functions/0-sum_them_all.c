#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to sum all the parameters
 * @n: number of all the fix parameters
 * Return: the result of the sum of all arguments or 0 if it fails
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int result = 0;
	va_list arguments;

	va_start(arguments, n);

	for (index = 0; index < n; index++)
	{
		result += va_arg(arguments, int);
	}

	if (n == 0)
	{
		return (0);
	}

	va_end(arguments);

	return (result);
}
