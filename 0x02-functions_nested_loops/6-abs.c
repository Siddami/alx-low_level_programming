#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @n: interger to be computed
 * Return: always 0 (success)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
