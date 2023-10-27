#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diag
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 = sum_diag1 + a[i * (size + 1)];
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		sum_diag2 = sum_diag2 + a[i * (size - 1)];
		a = a - size;
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
