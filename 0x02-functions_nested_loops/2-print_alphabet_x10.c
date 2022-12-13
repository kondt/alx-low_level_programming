#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c0, c1;

	c0 = 0;
	while (c0 <= 9)
	{
		c1 = 97;
		while (c1 <= 122)
		{
			_putchar(c1);
			c1++;
		}
		_putchar('\n');
		c0++;
	}
}
