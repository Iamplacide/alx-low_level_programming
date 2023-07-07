#include "main.h"

/**
 * _puts_recursion -  a program that puts a string of char using recursion
 * @s: The string character
 * Return : 0 always;
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
