#include "main.h"
#include <string.h>
/**
 * _strncat - a program that concatenates two strings
 * @dest: destination string
 * @src: Source string
 * @n: number of bytes from src
 * Return: concantenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, d;

	d = 0;
	i = 0;

	while (dest[i++])
		d++;
	for (i = 0; src[i] && i < n; i++)
		dest[d++] = src[i];

	return (dest);
}
