#include "main.h"
/**
 * _puts - a program that print a string at the console
 * @str: the string to be output
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
