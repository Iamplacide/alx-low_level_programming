#include <stdio>
/**
 * main - finds the largest prime factor
 * Return: 0 always
 */
int main(void)
{
	long a = 612852475143;
	int div;

	while (div < (a / 2))
	{
		if ((a % 2) == 0)
		{
			a = a / 2;
			continue;
		}

		for (div = 3; div < a; div = div + 2)
		{
			if ((a % div) == 0)
			{
				a = a / div;
			}
		}
	}
	printf("%ld\n", a);
	return (0);
}
