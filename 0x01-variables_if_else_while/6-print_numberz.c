#include <stdio.h>

/**
 * main - Prints all single digit base 10 starting from 0, and then a new line
 * only putchar of stardard library functions is allowed for this program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = -1;
	while (num++ <= 8)
		putchar(num + '0');
	putchar('\n');

	return (0);
}
