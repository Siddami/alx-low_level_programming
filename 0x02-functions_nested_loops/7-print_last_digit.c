#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes in an integer
 * Return: returns output
 */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln * -l;
	_putchar(ln + '0');
	return (ln);
}
