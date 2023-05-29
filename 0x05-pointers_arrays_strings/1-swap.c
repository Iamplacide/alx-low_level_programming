#include "main.h"
/**
 * swap_int - a program that resets n to 98;
 * @a: the first int to be swapt
 * @b: the second to be swapt
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
