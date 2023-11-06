#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - array to create
 * @size: the size of the array
 * @c: character
 * Return: NULL if size =0 or return a pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p_array;

	if (size == 0)
		return (NULL);

	p_array = malloc(sizeof(char) * size);

	if (p_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p_array[i] = c;
	}

	return (p_array);
}
