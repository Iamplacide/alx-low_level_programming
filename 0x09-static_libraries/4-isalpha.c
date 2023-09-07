#include "main.h"
/**
 * _isalpha - a program that checks if the character is lower or upper case
 *
 * @c: The char to check
 * Return: 1 if it's an alphabet and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
