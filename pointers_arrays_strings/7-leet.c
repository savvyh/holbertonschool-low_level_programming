#include "main.h"
/**
 * leet - encode a string
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int i = 0;
	char encode[] = "43071";
	char letter[] = "aeotl";

	while (str[i] != '\0')
	{
		int j = 0;

		while (letter[j] != '\0')
		{
			if (str[i] == letter[j] || str[i] == letter[j] - 32)
			{
				str[i] = encode[j];
			}
		j++;
		}
	i++;
	}
	return (str);
}
