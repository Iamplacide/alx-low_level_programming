#include "main.h"
/**
 * print_alphabet_x10 - a program that prints lower case alphabets
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		b++;
	}
}
