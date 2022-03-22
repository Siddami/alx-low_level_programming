#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 * @str: the string to print in reverse.
 *
 */

void print_rev(char *str)
{
	int i = 0;
	int total_caracteres = 0;
	int c = 0;

	while (str[i] != 0)
	{
		i++;
	}
	total_caracteres = i - 1;

	for (c = 0; c <= total_caracteres; c++)
	{
		_putchar(str[total_caracteres - c]);
	}

	_putchar('\n');
}
