#include "main.h"
/**
 * reset_to_98 - prototype to define a function
 * @n: value of the variable
 */
void reset_to_98(int *n)
{
	int *p;

	p = &*n;

	*p = 98;
}
