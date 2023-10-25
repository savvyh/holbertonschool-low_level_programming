#include "main.h"
/**
 * cap_string - capitalize all words
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	char symbol[] = "\t\n ,;.!?'\"'(){}";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; symbol[j] != '\0'; j++)
			{
				if (str[i - 1] == symbol[j])
				{
				str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);
}
