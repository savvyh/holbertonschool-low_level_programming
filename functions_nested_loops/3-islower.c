#include "main.h"
/**
 * _islower - check lowercase character.
 * @c: character to check.
 * Return: 1 if lowercase, return 0 elsee.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
