#include "main.h"

int search(int num, int root);
int _sqrt_recursion(int n);

/**
 * search - finds the square root using recursion
 * @num: number taken form the input
 * @root: the square root number to find
 * Return: The result if it has a whole number root,
 * else it returns -1
 */

int search(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}

	if (root == num / 2)
	{
		return (-1);
	}
	else
	{
		return (search(num, root + 1));
	}
}

/**
 * _sqrt_recursion -  a program that finds the
 * whole square root of a function
 * @n: the given number
 * Return: The square root solution.
 */
	int _sqrt_recursion(int n)
{
	int root = 0;

	if (n <= 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (search(n, root));
}
