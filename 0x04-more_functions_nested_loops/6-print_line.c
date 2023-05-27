#include "main.h"
/**
 * print_line - print a line ntimes
 * @n: the number of times the underscore should be printed
 * Return: 0 always
 */
void print_line(int n)
{
	int a, b;

	b = 95;
	for (a = 0; a <= n; a++)
	{
		if (!(n <= 0))
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}
