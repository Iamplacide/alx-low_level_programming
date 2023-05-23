#include <stdio.h>

/**
 * main - a program that prints a text
 * Return: 1 when successful
 */
int main(void)
{
char *a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

fputs(a, stdout);
return (1);
}
