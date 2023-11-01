#include "main.h"
/**
 * function_bis - the function who calculate if prime number
 * @n: the number to check
 * @x: the number to divide
 * Return: 1 if n is prime number, else 0
 */
int function_bis(int n, int x)
{
	if (x * x > n)
		return (1);

	else if (n % x == 0)
		return (0);

	else
		return (function_bis(n, x + 1));
}
/**
 * is_prime_number - function to return if prime number
 * @n: the number to check
 * Return: 1 if n is prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else
		return (function_bis(2, n));
}
