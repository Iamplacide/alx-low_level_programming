#include <stdio.h>
/**
 * main - a program that prints add all even Fibonacci numbers
 * that are under 4 000 000
 * Return: 0 always
 */
int main(void)
{
	int c;
	unsigned long a, b, sum, even;

	a = 0;
	b = 1;
	even = 0;
	for (c = 1; c <= 32; c++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum % 2) == 0)
		{
			even = sum + even;
		}
	}
	printf("%ld\n", even);
	return (0);
}
