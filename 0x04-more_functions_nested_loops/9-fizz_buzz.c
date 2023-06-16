#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints number to the stdout
 * if multiple of 3 print Fizz and Buzz for 5,
 * multiple of both five and three put fizzbuzz
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
