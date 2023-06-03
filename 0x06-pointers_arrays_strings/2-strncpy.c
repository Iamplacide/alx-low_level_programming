#include "main.h"
#include <string.h>
/**
 * _strncpy - a program that copies a string
 * @dest: destination string
 * @src: Source string
 * @n: number of bytes to copy from src
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, s;

	s = 0;
	i = 0;

	while (src[i++])
		s++;
	for (i = 0; dest[i] && s++ <= n; i++)
		dest[i] = src[i];

	return (dest);
}
