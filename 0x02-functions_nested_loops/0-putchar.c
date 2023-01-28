#include "main.h"

/**
  * main - Print _putchar followed by a new line
  *
  * Return: Always 0 Success
  */
int main(void)
{
	char *str = "_putchar";

	while (str)
	{
		_putchar(str);
		str = str + 1;
	}
	return (0);
}
