#include "main.h"
/**
 * _strncy - copy a string
 * @dest: string
 * @src: string
 * @n: bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && src[index])
	{
		dest[index] = src[index];
		index++;
	}

	for (; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
