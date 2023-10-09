#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("%d and is greater than 5", lastDigit);
	else if (lastDigit == 0)
		printf("%d and is 0", lastDigit);
	else
		printf("%d and is less than 6 and not 0", lastDigit);
	printf("\n");
	return (0);
}
