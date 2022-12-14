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
		c1 = 0;
		while (c1 <= 9)
		{
			prod = c0 * c1;
			if (prod < 10)
			{
				_putchar('0' + prod);
				if (c1 != 9)
				{
					_putchar(',');
					_putchar(32);
				}
			}
			else
			{
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
				if (c1 != 9)
				{
					_putchar(',');
					_putchar(32);
				}
			}

			c1++;
		}
		_putchar('\n');
		c0++;
	}
}
