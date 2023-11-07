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
	int w, h;
	int **array = NULL;

	if (array == NULL)
		return (NULL);
	
	array = malloc(sizeof(int) * (width + height));

	w = 0;
	while (w < width)
	{ 
		w++;
		if (width == 0)
			return (NULL);
	}

	h = 0;
	while (h < height)
	{
		h++;
		if (height == 0)
		return (NULL);
	}

	return (array);
}