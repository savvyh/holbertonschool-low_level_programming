#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* malloc_checked - function to allocate memory
* @b: value
* Return: 0
*/
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
