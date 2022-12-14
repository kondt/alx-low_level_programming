#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int c0, c1, prod;

	c0 = 0;
	while (c0 <= 9)
	{
		_putchar('0');
		c1 = 1;
		while (c1 <= 9)
		{
			_putchar(',');
			_putchar(' ');

			prod = c0 * c1;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
			c1++;
		}
		_putchar('\n');
		c0++;
	}
}
