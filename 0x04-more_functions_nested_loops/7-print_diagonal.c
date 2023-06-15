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
	if (n > 0)

	{
		for (a = 0; a < n; a++)
		{
			for (e = 0; e < a; e++)
			{
				_putchar(' ');
			}
			_putchar(b);
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
