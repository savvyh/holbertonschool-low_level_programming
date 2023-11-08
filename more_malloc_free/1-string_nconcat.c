#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* string_nconcat - concatenate two string with n byte
* @s1: string 1
* @s2: string 2
* @n: number of bytes
* Return: NULL if it's a fail, or ptr if it works
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int i, j;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[length_s1] != '\0')
	{
		length_s1++;
	}

	while (s2[length_s2] != '\0')
	{
		length_s2++;
	}

	if (n >= length_s2)
		n = length_s2;

	ptr = malloc(sizeof(char) * (length_s1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[length_s1 + j] = s2[j];

	ptr[length_s1 + n] = '\0';

	return (ptr);
}
