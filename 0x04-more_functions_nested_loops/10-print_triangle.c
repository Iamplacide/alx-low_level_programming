#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: the size of the triangle be printed
 * Return: 0 always
 */
void print_triangle(int size)
{
	int a, e;

	if (size > 0)

	{
		for (a = 0; a < size; a++)
		{
			for (e = 0; e < size; e++)
			{
				if (size - a <= e + 1)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
