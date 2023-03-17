#include <stdio.h>
/**
 *
 * main - main function
 *
 * Return: o on success
 */

int main(void)
{
	int a;
	long int b;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(d));
	printf("Size of int: %lu byte(s)", (unsigned long)sizeof(a));
	printf("Sie of a long int: %lu byte(s)",(unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)",(unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
	return (0);
}
