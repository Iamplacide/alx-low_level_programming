#include "main.h"
/**
 * print_alphabet - a program that prints lower case alphabets
 * Return: 0 always
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
