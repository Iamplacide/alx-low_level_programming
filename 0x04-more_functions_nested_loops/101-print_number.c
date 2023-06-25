#include "main.h"
/**
 * print_number - print n using putchar;
 * @n : the number to be printed
 * Return: 0 always
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		a = n;
	}
	if ((a / 10) > 0)
	{
		print_number(a / 10);
	}

	_putchar((a % 10) + '0');
}
