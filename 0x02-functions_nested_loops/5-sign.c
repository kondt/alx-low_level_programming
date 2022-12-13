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
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
}
