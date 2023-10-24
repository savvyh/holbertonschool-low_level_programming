#include "main.h"
#include <stdio.h>
/**
 * print_array - print the element of the array
 * @a: pointer to the array
 * @n: value of the array
 */
void print_array(int *a, int n)
{
	int number_in_bracket;

	for (number_in_bracket = 0; number_in_bracket < n; number_in_bracket++)
	{

		if (number_in_bracket == 0)
		{
			printf("%d", a[number_in_bracket]);
		}
		else
		{
			printf(", %d", a[number_in_bracket]);
		}
	}
	printf("\n");
}
