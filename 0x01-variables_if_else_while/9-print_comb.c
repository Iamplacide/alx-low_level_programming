#include <stdio.h>
/**
 * main - A program that prints numbers + a comma using putchar
 * Return: 0 always
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
