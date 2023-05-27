#include "main.h"
/**
 * print_diagonal - print a line ntimes
 * @n: the number of times the underscore should be printed
 * Return: 0 always
 */
void print_diagonal(int n)
{
	int a, b, e;

	b = 92;
	for (a = 0; a < n; a++)
	{
		for (e = 0; e < a; e++)
		{
			_putchar(' ');
		}
		if (!(n <= 0))
		{
			_putchar(b);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
