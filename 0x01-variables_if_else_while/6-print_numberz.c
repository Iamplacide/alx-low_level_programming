#include <stdio.h>
/**
 * main - A program that prints number from 0 to 9 using putchar
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
