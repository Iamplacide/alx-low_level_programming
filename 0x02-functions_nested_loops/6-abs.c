#include "main.h"
/**
 * _abs - a programm that computes the absolute value of an integer
 * @i: the int to make absolute
 * Return: always zero
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
