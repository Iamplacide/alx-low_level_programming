#include "main.h"

/**
 * _sqrt_recursion -  a program that finds the
 * whole square root of a function
 * @n: the given number
 * Return: The square root solution.
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n == 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}

	root = (n / 2);

	while ((root * root) != n && root != 0)
	{
		root--;
	}

	if (root == 0)
	{
		return (-1);
	}
	else
	{
		return (root);
	}
}
