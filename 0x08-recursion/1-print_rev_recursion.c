#include "main.h"

/**
 * _print_rev_recursion -  a program that puts a string of char in reverse
 * using a recursive call
 * @s: The string character
 * Return : 0 always;
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
