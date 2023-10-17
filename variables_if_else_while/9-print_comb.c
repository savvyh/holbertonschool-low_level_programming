#include <stdio.h>
/**
 * main - all combinaison of single-digit numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int digit_number;
for (digit_number = '0'; digit_number <= '9'; digit_number++)
{
	putchar(digit_number);

if (digit_number < '9')
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
