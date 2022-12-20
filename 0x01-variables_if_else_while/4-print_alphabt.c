#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except e and q, then a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;

	count = 96;

	while (count++ <= 121)
	{
		if (count != 101 && count != 113)
			putchar(count);
	}
	return (0);
}
