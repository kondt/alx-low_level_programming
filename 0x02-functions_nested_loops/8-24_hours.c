#include "main.h"

/**
 * jack_bauer - Prints every minute of the day form 00:00 to 23:00
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int c0, c1;

	c0 = 0;
	while (c0 < 24)
	{
		c1 = 0;
		while (c1 < 60)
		{
			_putchar('0' + (c0 / 10));
			_putchar('0' + (c0 % 10));
			_putchar(':');
			_putchar('0' + (c1 / 10));
			_putcahr('0' + (c1 % 10));
			_putchar('\n');
			c1++;
		}
		c0++;
	}
}
