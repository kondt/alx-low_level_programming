#include <stdio.h>

/**
  * main - Prints Numbers 0 to 9 the \n
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int count;

	for (count = 48; count < 58; count++)
		putchar(count);
	putchar('\n');

	return (0);
}
