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
		if (count != 101 && count != 113)
		{
			putchar(count);
		}
	putchar('\n');

	return (0);
}
