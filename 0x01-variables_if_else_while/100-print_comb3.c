#include <stdio.h>

/**
  * main - Prints all possible combinations of two digits
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int c0, c1;

	for (c0 = 48; c0 < 58; c0++)
	{
		for (c1 = 49; c1 < 58; c1++)
		{
			if (c1 > c0)
			{
				putchar(c0);
				putchar(c1);
				if (!(c0 == 56 && c1 == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
100-print_comb3.c}
