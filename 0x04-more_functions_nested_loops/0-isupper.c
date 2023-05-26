#include "main.h"
/**
 * _isupper - a program that xhecks if the nput char is a capital
 * or lower case letter and return 1 or 0 respectively
 * @c: the integer to check 
 * Return: 1 when uppercase 0 when lowercase
 */
int _isupper(int c)
{
	int ret;

	if (c >= 65 && c <= 90)
	{
		ret = 1;
	}
	else if (c >= 97 && c <= 122)
	{
		ret = 0;
	}
	return (ret);
}
