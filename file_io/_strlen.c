#include "main.h"
/**
 * _strlen - the lenght of a string
 * @s: the string
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
