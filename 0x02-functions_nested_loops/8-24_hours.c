#include "main.h"
/**
 * jack_bauer - a program that prints every minute of the day
 * Return: 0 always
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 00; a <= 23; a++)
	{
		for (b = 00; b <= 59; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
