#include "main.h"
/**
 * jack_bauer - print every minute of day
 * Return: hour per day
*/
void jack_bauer(void)
{
	int minute;
	int hour;

	for (minute = 0 ; minute <= 59 ; minute++)
	{
		for (hour = 0 ; hour <= 23 ; hour++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(minute / 10);
			_putchar(minute % 10);
			_putchar('\n');
		}
	}
}
