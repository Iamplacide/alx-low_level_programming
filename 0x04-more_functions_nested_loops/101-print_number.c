#include "main.h"
/**
 * print_number - print n using putchar;
 * @n : the number to be printed
 * Return: 0 always
 */
void print_number(int n)
{
	int a;

	a = n;
	if (a == 0)
	{
		_putchar('0');
	}
	if (a < 0)
	{
		_putchar('-');
		a = a * -1;
	}
	if (a > 0)
	{
		if (a >= 1000)
		{
			_putchar((a / 1000) % 10 + '0');
		}
		if (a >= 100)
		{
			_putchar((a / 100) % 10 + '0');
		}
		if (a >= 10)
		{
			_putchar((a / 10) % 10 + '0');
		}
		_putchar(a % 10 + '0');
	}
}
