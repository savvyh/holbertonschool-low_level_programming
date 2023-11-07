#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* str_concat - function to concatenate 2 strings and allocate memory
* @s1: first string
* @s2: second string
* Return: str2
*/
char *str_concat(char *s1, char *s2)
{
	int len, len2, index;
	char *str = NULL;

	if (s2 == NULL)
	{
		s2 = NULL;
	}

	if (s1 == NULL)
	{
		s1 = NULL;
	}

	len = 0;
	while (s1[len] != '\0')
		len++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	str = malloc(sizeof(char) * (len + len2 + 1));

	if (str == NULL)
		return (NULL);

	for (index = 0; index < len; index++)
	{
		str[index] = s1[index];
	}

	for (index = 0; index < len2; index++)
	{
		str[index + len] = s2[index];
	}

	str[len + len2] = '\0';
	return (str);
}
