#include <stdio.h>

/**
  * main - Prints lowercase letters of the alphabet
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
