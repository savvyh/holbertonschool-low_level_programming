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
int i = 0;
int j = 0;
char *str2;

if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)

str2 = (char *)malloc(sizeof(char) * (i + 1));

if (str2 == NULL)
return (NULL);

for (j = 0; j < i; j++)
{
str2[j] = str[j];
}

str2[j] = '\0';

return (str2);
}
