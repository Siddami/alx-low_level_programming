#include <stdio.h>

/**
 * main - print alphabets in reverse lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
