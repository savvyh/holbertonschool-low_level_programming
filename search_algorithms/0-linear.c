#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located, -1 if array is empty or NULL
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index])
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
