#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if b is null | char != 0 et 1
*/
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int decimal_num = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		decimal_num = decimal_num * 2 + (b[index] - '0');
		index++;
	}

	return (decimal_num);
}
