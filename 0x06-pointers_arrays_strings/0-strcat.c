#include "main.h"
#include <string.h>
/**
 * _strcat - a program that concatenates two strings
 * @dest: destination string
 * @src: Source string
 * Return: concantenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, d;

	d = 0;
	i = 0;
	while (dest[i++])
		d++;
	for (i = 0; src[i]; i++)
		dest[d++] = src[i];
	return (dest);
}
