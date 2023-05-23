#include <stdio.h>
/**
 * main - A program that prints alphabet using putchar
 * Return: 0 always
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
