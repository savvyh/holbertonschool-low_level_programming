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
		for (j = 0; symbol[j] != '\0'; j++)
		{
			if ((i == 0 || str[i - 1] == symbol[j]) && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
