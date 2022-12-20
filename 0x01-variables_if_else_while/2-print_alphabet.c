#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int count;

	count = 97;
	while (count++ <= 122)
		putchar(count);
	putchar('\n');
	return (0);
}
