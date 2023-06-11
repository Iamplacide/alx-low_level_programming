#include <stdio.h>
/**
 * main - a program that prints the first 98 Fibonacci numbers
 * Return: 0 always
 */
int main(void)
{
	int c;
	unsigned long a, b, sum;

	a = 0;
	b = 1;
	for (c = 1; c <= 98; c++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (c != 98)
		{
		printf("%lu, ", sum);
		}
		else
		{
			printf("%lu", sum);
		}
	}
	putchar('\n');
	return (0);
}
