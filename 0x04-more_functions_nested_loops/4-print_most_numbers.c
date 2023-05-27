#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except and 4
 * Return: 0 always
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (!(a == 50 || a == 52))
		{
		_putchar(a);
		}
	}
	_putchar('\n');
}
