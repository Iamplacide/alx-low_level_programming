#include <stdio.h>
/**
 * main - a program that add all the multiples of 5 and 3
 * within the scale from 1 to 1024
 * Return: 0 always
 */
int main(void)
{
	int a, sum;

	sum = 0;
	for (a = 1; a < 1024; a++)
	{
		if (((a % 3) == 0) || ((a % 5) == 0))
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);
}
