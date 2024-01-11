#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * sqrt_helper - finds sqrt of a number above 1
 *
 * @n: number to find sqrt of
 * @r: number to try
 *
 * Return: sqrt or -1
 */

int sqrt_helper(int n, int r)
{
	if (r * r == n)
	{
		printf("d");
		return (r);
	}
	if (r*r > 46340)
		return (sqrt_helper(n, r - 1));
	if (r * r < n)
	{
		printf("e");
		return (-1);
	}
	return (sqrt_helper(n, r - 1));
}

/**
 * _sqrt_recursion - finds sqrt using helper function
 *
 * @n: number input
 *
 * Return: sqrt or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		printf("a");
		return (-1);
	}
	if (n * n == n)
	{
		printf("b");
		return (n);
	}
		printf("%d,c", INT_MAX);
	return (sqrt_helper(n, n / 2));
}
