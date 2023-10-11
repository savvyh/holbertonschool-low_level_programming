#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int size_char = sizeof (char);
int size_int = sizeof (int);
int size_longInt = sizeof (long int);
int size_longLongInt = sizeof (long long int);
int size_float = sizeof (float);

printf("Size of a char: %d byte(s)\n", size_char);
printf("Size of an int: %d byte(s)\n", size_int);
printf("Size of a long int: %d byte(s)\n", size_longInt);
printf("Size of a long long int: %d byte(s)\n", size_longLongInt);
printf("Size of a float: %d byte(s)\n", size_float);

return (0);
}
