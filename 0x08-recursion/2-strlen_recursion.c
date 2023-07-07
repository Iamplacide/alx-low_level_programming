#include "main.h"

/**
 * _strlen_recursion -  a program that print the length of a string
 * using a recursive call
 * @s: The string character
 * Return: The string length in digits.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
