#include "main.h"
/**
 * rev_string - a program that prints a string in reverse
 * @s: the string to be printed
 */
void rev_string(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	for (a = i - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
