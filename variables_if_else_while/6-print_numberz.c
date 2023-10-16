#include <stdio.h>
/**
 * main - print single digit number 
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int digit_number;

for (digit_number = '0'; digit_number <= '9'; digit_number++)
{
	putchar(digit_number);
}
  	putchar('\n');

return (0);
}
