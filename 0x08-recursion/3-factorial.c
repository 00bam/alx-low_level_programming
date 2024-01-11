#include "main.h"

/**
 * factorial - finds factorial of a number
 *
 * @n: number input
 *
 * Return: factorial or (-1) for error
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
