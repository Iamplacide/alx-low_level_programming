#include "main.h"
/**
 * print_last_digit - a program that print the last digit of an integer
 * @n: the int to take the value from
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
