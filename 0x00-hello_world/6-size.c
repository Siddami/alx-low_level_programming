#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	float c;
	double d;
	long e;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of double: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
