#include "main.h"

/**
 * _isalpha - checks for alphabetic charcter
 *@c: The character being tested
 *
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
