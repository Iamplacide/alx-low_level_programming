#include "main.h"

/**
 * factorial -  a program that returns the factorial of a digit
 * using a recursion
 * @n: The digit to compute the factorial
 * Return: The factorial in digits.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
