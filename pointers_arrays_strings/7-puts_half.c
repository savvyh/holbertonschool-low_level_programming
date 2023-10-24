#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: the string
 */
void puts_half(char *str)
{
	int len = 0;
	int half_len;

	while (str[len] != '\0')
	{
		len++;
	}

	half_len = (len + 1) / 2;

	while (str[half_len] != '\0')
	{
		_putchar(str[half_len]);
		half_len++;
	}
	_putchar('\n');
}
