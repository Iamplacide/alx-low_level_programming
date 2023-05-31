#include "main.h"
/**
 * print_rev - a program that prints a string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}
	for (a = i; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
