#include "main.h"
#include <stdio.h>
/**
 * main - print a strange interview
 * Return: 0 Always
 */
int main(void)
{
	int number, multiple_3, multiple_5;

	for (number = 1; number <= 100 ; number++)
	{
		multiple_3 = number % 3;
		multiple_5 = number % 5;

		if (number == 100)
		{
			printf("Buzz\n");
		}
		else if (multiple_3 == 0 && multiple_5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (multiple_3 == 0)
		{
			printf("Fizz ");
		}
		else if (multiple_5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", number);
		}
	}
	return (0);
}
