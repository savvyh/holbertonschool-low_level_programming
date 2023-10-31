#include "main.h"
/**
 * fonction_bis - fonction to calculate square root of a number
 * @x: the number to multiplie
 * @n: the number to find the square root
 * Return: the natural square root of a number
 */
int fonction_bis(int x, int n)
{
	if (x * x == n)
		return (x);

	else if (x * x > n)
		return (-1);

	else
		return (fonction_bis(x + 1, n));
}
/**
 * _sqrt_recursion - the natural square root of a number
 * @n: number
 * Return: the fonction to calculate square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	else if (n < 0)
		return (-1);

	else
		return (fonction_bis(1, n));
}
