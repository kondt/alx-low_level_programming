#include <stdio.h>

/**
  * main - Prints lowercase letters of the alphabet
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int count;

	for (count = 97; count < 123; count++)
		putchar(count);
	for (count = 65; count < 91; count++)
		putchar(count);
	putchar('\n');

	return (0);
}
