#include <stdio.h>
/**
 * main - a program that prints to the console numbers from 0 to 100
 * if multiple of 3 print Fizz and Buzz for 5, Fizzbuzz for the
 * multiple of both five and three
 * Return: 0 always
 */
int main(void)
{
	int a, n;

	for (a = 1; a <= 100; a++)
	{
		if (((a % 3) == 0) && ((a % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	putchar('\n');
	return (0);
}
