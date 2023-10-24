#include "main.h"
/**
 * _strcpy - the string
 * @dest: the pointer
 * @src: the pointer
 * Return: to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	int n = 0;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];

	for ( ; index <= n; index++)
		dest[index] = '\0';

	return (dest);
}
