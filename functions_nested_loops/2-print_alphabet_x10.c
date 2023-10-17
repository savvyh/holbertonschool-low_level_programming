#include "main.h"
/**
* print_alphabet_x10 - print alphabet 10 times
*/
void print_alphabet_x10(void)
{
char letter = 'a';
int repeat;

for (repeat = 0 ; repeat < 10 ; repeat++)
{
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	letter = 'a';
}
}
