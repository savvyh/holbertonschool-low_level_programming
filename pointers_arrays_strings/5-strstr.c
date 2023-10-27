#include "main.h"
/**
 * _strstr - find the first occurrence of the substring
 * @haystack: string
 * @needle: substring
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j;

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (needle);
			}
		}
	}
	return ('\0');
}
