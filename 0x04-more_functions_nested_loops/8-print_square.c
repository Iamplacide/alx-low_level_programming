#include "main.h"
/**
 * print_square - print a line ntimes
 * @size: the size of the square
 * Return: 0 always
 */
void print_square(int size)
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
		}
		_putchar('\n');
	}
}
