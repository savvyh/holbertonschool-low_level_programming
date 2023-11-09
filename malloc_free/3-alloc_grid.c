#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* alloc_grid - function to concatenate 2 strings and allocate memory
* @width: width of an array
* @height: height of an array
* Return: NULL if faillure or return array
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (i = 0; i < height; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
