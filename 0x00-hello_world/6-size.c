#include<stdio.h>
/*
 * main - a program that prints the size of the variables
 * Return : 0 when successful
 */
int main()
{
	int i;
	char a;
	long int b;
	long long int li;
	float f;

	printf("Size of a char: %lu byte(s)", sizeof(a));
	printf("Size of a int: %lu byte(s)", sizeof(i));
	printf("Size of a long int: %lu byte(s)", sizeof(b));
	printf("Size of a long long int: %lu byte(s)", sizeof(li));
	printf("Size of a float: %lu byte(s)", sizeof(f));
	return (0);
}
