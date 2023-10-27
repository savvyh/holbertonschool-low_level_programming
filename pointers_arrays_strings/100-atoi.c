#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: the string
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int n = 0;
	int sign = 1;

		if (s[0] == '-') 
		{
			sign = -1;
			i++;
		}
		else if (s[0] == '+')
		{
			i++;
		}

		while (s[i] != '\0')
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				n = n * 10 + (s[i] - '0');
			}
			else
			{
				break;
			}
			i++;
		}

	return (sign * n);
}
