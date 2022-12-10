#include <stdio.h>

/**
  * main - Prints lowercase letters of the alphabet in reverse
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int count;

	for (count = 122; count > 96; count++)
		putchar(count);
	putchar('\n');

	return (0);
}
