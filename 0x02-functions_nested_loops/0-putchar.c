#include "main.h"

/**
  * main - Print _putchar followed by a new line
  *
  * Return: Always 0 Success
  */
int main(void)
{
	char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
	return (0);
}
