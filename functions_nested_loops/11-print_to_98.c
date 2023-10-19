#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers in n
 * @n: value of number
 */
void print_to_98(int n)
{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
			n++;
		}
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
			printf("%d\n", 98);
}
