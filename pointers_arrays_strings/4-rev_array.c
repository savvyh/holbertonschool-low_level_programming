#include "main.h"
/**
 * reverse_array - reverse the content
 * @a: array of integer
 * @n: number of element
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;

		i++;
	}
	n--;
}
