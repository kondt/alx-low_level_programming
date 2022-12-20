#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase then a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;

	count = 96;
	while (count++ <= 121)
		putchar(count);
	count = 64;
	while (count++ <= 89)
		putchar(count);
	putchar('\n');
	return (0);
}
