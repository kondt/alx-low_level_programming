#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @j: The number to obtain the last digit
 *
 * Return: The value of the last digit
 */
int print_last_digit(int j)
{
	int last_digit;

	if (j > 0)
	{
		last_digit = j % 10;
		_putchar(last_digit);
		return (last_digit);
	}
	else if (j < 0)
	{
		last_digit = (j * -1) % 10;
		_putchar(last_digit);
		return (last_digit);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
