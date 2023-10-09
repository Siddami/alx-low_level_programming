#include <unistd.h>

/**
 * main - a script that prints content without using printf or puts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *message =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;

	if (write(2, message, len) != len)
	{
		return (1);
	}
	return (1);
}
