#include "main.h"
/**
 * _strcat -  concatenates two string
 * @dest: second string
 * @src: first string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int index;
	int dest_length;

	for (dest_length = 0; dest[dest_length] != '\0'; dest_length++)

		dest_length++;

	for (index = 0; src[index] != '\0'; index++)

		dest[dest_length + index] = src[index];

	dest[dest_length + index] = '\0';
	return (dest);
}
