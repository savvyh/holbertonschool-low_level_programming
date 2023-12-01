#include "main.h"
/**
 * flip_bits - function that determines the number of bits to invert
 *				to transition from one number to another
 *
 * @n: the number to find and to invert
 * @m: the number to find and to invert
 *
 * Return: the result of inversion
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compare = n ^ m;
	unsigned long int bits = 0;

	while (compare > 0)
	{
		bits = bits + (compare & 1);
		compare = (compare >> 1);
	}
	return (bits);
}
