#include "main.h"
/**
 * print_square - print a line ntimes
 * @size: the size of the square
 * Return: 0 always
 */
void print_square(int size)
{
	int l, b, d;

	d = 35;
	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(d);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
