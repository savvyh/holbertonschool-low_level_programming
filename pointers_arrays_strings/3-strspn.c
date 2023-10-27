#include "main.h"
#include <stdio.h>
/**
 * _strspn - length of a prefix substring
 * @s: segment to return bytes from
 * @accept: the bytes to include
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int j = 0;

		if (s[i] != 32)
		{
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					len++;
				}
			j++;
			}
		}
		else
		{
			return (len);
		}
	}
	return (len);
}
