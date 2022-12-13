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
			}
			else
			{
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}

			if (c1 != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}
			else
			{
				_putchar(36);
				_putchar('\n');
			}
			c1++;
		}
		c0++;
	}
}
