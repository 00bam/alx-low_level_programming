#include "main.h"

/**
 * print_last_digit - prints out last digit of an int
 * @n: input
 *
 * Return: ;ast digit
 */
int print_last_digit(int n)
{
	(n > 0) ? (n = n) : (n = -n);
	_putchar('0' + (n % 10));

	return (n % 10);
}
