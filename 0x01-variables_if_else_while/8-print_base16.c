#include <stdio.h>
/**
 * main - A program that prints base16 numbers using putchar
 * Return: 0 always
 */
int main(void)
{
	char letter;
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
