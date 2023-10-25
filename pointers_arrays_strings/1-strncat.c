#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int src_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)

		dest_len++;

	for (src_len = 0; src_len < n && src[src_len] != '\0'; src_len++)
	{
		dest[dest_len + src_len] = src[src_len];
	}

	return (dest);
}
