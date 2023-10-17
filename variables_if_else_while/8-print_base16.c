#include <stdio.h>
/**
 * main - all numbers of base 16
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int number;
char alpha;
for (number = '0'; number <= '9'; number++)
	putchar(number);
for (alpha = 'a'; alpha <='f'; alpha++)
	putchar(alpha);
putchar('\n');
return (0);
}
