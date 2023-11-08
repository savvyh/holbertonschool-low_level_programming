#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* _strdup - function to copy and allocate memory
* @str: string
* Return: str2
*/
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *str2 = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		str2[j] = str[j];
	}

	str2[j + 1] = '\0';

	return (str2);
}
