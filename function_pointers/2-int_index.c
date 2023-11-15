#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: the number of element of array
 * @cmp: pointer to the function to be used to compare
 * Return: the index of the first element or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (index < size)
	{
		if (cmp(array[index]) != 0)
			return (index);

		index++;
	}

	return (-1);
}
