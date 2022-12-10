#include <stdio.h>


/**
  * main - Prints all possible combinations of two two digits
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int c0, c1;

	for (c0 = 0; c0 < 98; c0++)
	{
		for (c1 = 1; c1 <= 99; c1++)
		{
			putchar((c0 / 10) + '0');
			putchar((c0 % 10) + '0');
			putchar(' ');
			putchar((c1 / 10) + '0');
			putchar((c1 % 10) + '0');

			if (c0 == 98 && c1 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
