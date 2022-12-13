#include "main.h"

/**
 * print_sign - checks if n is positive, Zero or negative
 *@n: The integer being tested
 *
 * Return: 1 if n is +, 0 if zero and -1 if less that zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		/* _putchar(49); */
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
