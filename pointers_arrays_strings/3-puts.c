#include "main.h"
/**
* _puts - print a string
* @str: the string in question
*/
void _puts(char *str)
{

	while (*str != '\0')
	{
		str++;
		_putchar(*str);
	}
		_putchar('\n');
}
