#include <stdio.h>

/**
  * main - Prints all possible combinations of two digits
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int c0, c1, c2;

	for (c0 = 48; c0 < 58; c0++)
	{
		for (c1 = 49; c1 < 58; c1++)
		{
			for (c2 = 50; c2 < 58; c2++)
			{
				if (c0 < c1 && c1 < c2)
				{
					putchar(c0);
					putchar(c1);
					putchar(c2);
					if (!(c0 == 55 && c1 == 56 && c2 == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
