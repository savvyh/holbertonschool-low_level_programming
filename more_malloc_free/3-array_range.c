#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: value
 * @max: value
 * Return: new array
*/
int *array_range(int min, int max)
{
	int index;
	int contain = 0;
	int *array = NULL;

	if (min > max)
	{
		return (NULL);
	}

	for (index = min; index  <= max; index++)
	{
		contain++;
	}

	array = malloc(sizeof(int) * contain);

	if (!array)
		return (NULL);

	for (index = 0; index < contain; index++)
	{
		array[index] = min + index;
	}

	return (array);
}
