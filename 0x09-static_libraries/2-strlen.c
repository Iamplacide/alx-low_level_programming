#include "main.h"
/**
 * _strlen - a program that resets n to 98;
 * @s: the string to be counted
 * Return: The string length
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
