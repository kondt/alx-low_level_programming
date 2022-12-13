#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @j: The integer to be checked
 *
 * Return: Absolute value of J
 */
int _abs(int j)
{
	if (j > 0)
		return (j);
	else if (j < 0)
		return (j * -1);
	else
		return (0);
}
