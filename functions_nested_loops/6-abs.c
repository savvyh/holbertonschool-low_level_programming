#include "main.h"
/**
 * _abs - compute the absolute value of integer
 * @absolute_number: number with sign
 * Return: Always 0.
 */
int _abs(int absolute_number)
{
	if (absolute_number < 0)
	{
		return (-absolute_number);
	}
	else
	{
		return (absolute_number);
	}
}
