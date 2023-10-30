#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: the number
 * Return: -1 if n < 0 or 1 if n == 0 or n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
