#include "function_pointers.h"
/**
 * array_iterator - execute a function
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to the function I need to use
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (action && array)
	{
		while (index < size)
		{
			action(array[index]);
			index++;
		}
	}
}
