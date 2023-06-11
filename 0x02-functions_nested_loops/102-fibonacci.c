#include <stdio.h>
/**
 * main - a program that prints the first Fibonacci numbers
 * Return: 0 always
 */
int main(void)
{
	int c;
	unsigned long a, b, sum;

	a = 0;
	b = 1;
	for (c = 1; c <= 50; c++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (c != 50)
		{
		printf("%ld, ", sum);
		}
		else
		{
			printf("%ld", sum);
		}
	}
	putchar('\n');
	return (0);
}
