#include "main.h"
/**
 * _isalpha - check alphabetic character
 * @c: check
 * Return: 1 if letter, lowercase or uppercase, else 0.
 */
int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c <= 'A' && c <= 'Z'))
	{
	  return (1);
	}
  else
	{
	  return (0);
	}
}
