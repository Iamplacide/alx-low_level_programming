#include "main.h"
int diviseit(int ch, int div);
int is_prime_number(int n);

/**
 * diviseit - checks if the number is divisible
 * @ch: the number to be checked
 * @div: the divisor
 * Return: 0 if natural number, 1 if prime.
 */

int diviseit(int ch, int div)
{
	if (ch % div == 0)
	{
		return (0);
	}
	if (div == ch / 2)
	{
		return (1);
	}
	else
	{
		return (diviseit(ch, div + 1));
	}
}

/**
 * is_prime_number -  a program that returns the value 1 if
 * the n entered number is prime and 0 if not
 * @n: the number to be checked
 * Return: 1 if prime and 0 if not.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2 && n == 3)
	{
		return (1);
	}
	else
	{
	return (diviseit(n, div));
	}
}
