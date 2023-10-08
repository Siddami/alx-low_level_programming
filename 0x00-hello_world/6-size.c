#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n",(unsigned long)sizeof(char));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(float));
	printf("Size of double: %zu byte(s)\n", (unsigned long)sizeof(double));
	printf("Size of long: %zu byte(s)\n", (unsigned long)sizeof(long));
	printf("Size of short: %zu byte(s)\n", (unsigned long)sizeof(short));
	printf("Size of void: %zu byte(s0\n", (unsigned long)sizeof(void));
	printf("Size of long long: %zu byte(s)\n", (unsigned long)sizeof(long long));
	printf("Size of long double: %zu byte(s)\n", (unsigned long)sizeof(long double));
	return (0);
}
