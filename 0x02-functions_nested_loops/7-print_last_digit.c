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
	_putchar(i);
	return (i);
}
