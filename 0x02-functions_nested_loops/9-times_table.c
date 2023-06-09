#include "main.h"
/**
 * times_table - a program that prints the nine times table starting with zero
 * Return: 0 always
 */
void times_table(void)
{
	int a, b, mul;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mul = a * b;
			if (mul < 10)
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar(mul + '0');
			}
			if (mul >= 10)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
