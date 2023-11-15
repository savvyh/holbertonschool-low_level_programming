#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of all the element of the program
 * @argv: array of all element of the program
 * Return: Always Success (0)
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	if (operator == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error");
		exit(100);
	}

	result = operator(num1, num2);
	printf("%d\n", result);

	return (0);
}
