#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: the string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int n = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		s++;
	}

	return (sign * n);
}
