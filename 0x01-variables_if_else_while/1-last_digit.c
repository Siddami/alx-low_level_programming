#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
		printf("%d and is greater than 5", lastDigit);
	else if (lastDigit == 0)
		printf("0 and is 0");
	else
		printf("%d and is less than 6 and not 0", lastDigit);
	printf("\n");
	return (0);
}
