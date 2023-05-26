#include "main.h"
/**
 * _isdigit - a program that checks if the input is a digit
 * @c: the integer to check
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	int ret;

	if (c >= 48 && c <= 57)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
