int _putchar(char c);

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int c;

	c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

