#include "main.h"
/**
 * _memcpy - copy the memory area to an other memory area
 * @dest: memory area
 * @src: memory area
 * @n: byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
