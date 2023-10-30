#include "main.h"
/**
 * _pow_recursion - the value of x raised to the power of y
 * @x: value
 * @y: power of x
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		x = (x * _pow_recursion(x, y - 1));
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
