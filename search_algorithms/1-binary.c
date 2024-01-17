#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located, -1 if array is empty or NULL
*/
int binary_search(int *array, size_t size, int value)
{
	size_t index, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (right >= left)
	{
		printf("Searching in array: ");

		for (index = left; index < right; index++)
		{
			printf("%d, ", array[index]);
		}
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;

		if (array[index] == value)
		{
			return (index);
		}
		else if (array[index] > value)
		{
			right = index - 1;
		}
		else
		{
			left = index + 1;
		}
	}
	return (-1);
}
