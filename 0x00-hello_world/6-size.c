#include<stdio.h>
/*
 * main - a program that prints the size of the variables
 * Return : 0 when successful
 */
int main(void)
{
	int i;
	char a;
	long int b;
	long long int li;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of a int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
