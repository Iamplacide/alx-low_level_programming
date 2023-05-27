#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 ten times
 * Return: 0 always
 */
void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			c = '0' + (b % 10);
			_putchar(c);
		}
	_putchar('\n');
	}
}
