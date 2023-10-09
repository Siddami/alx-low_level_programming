#include <stdio.h>

/**
 * main - a program that prints all letters in lowercase except q and e
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if(letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
