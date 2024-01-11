#include "main.h"

/**
 * is_prime_helper - checks if number is prime
 *
 * @n: number to check
 * @r: possible factor
 *
 * Return: 1 or 0
 */

int is_prime_helper(int n, int r)
{
	if (r == 1 || r == -1)
		return (1);
	if (n % r == 0)
		return (0);
	return (is_prime_helper(n, r - 1));
}

/**
 * is_prime_number - checks if number is prime
 *
 * @n: number input
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n == -1)
		return (0);
	return (is_prime_helper(n, n / 2));
}
