#include "function_pointers.h"
/**
 * print_name - function that print a name
 * @name: the name
 * @f: function_pointer
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
