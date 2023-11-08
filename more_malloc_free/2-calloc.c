#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* _calloc - allocate memory to an array
* @nmemb: number of element that we want to allocate
* @size: size of those elements in byte
* Return: NULL if it's a fail, or ptr if it works
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *array = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
		if (array == NULL)
			return (NULL);

	for (index = 0; index < (nmemb * size); index++)
	{
		array[index] = 0;
	}

	return (array);

}
