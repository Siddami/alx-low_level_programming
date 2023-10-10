#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 16; i++)
		putchar('0' + i);
	for (j = 0; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
