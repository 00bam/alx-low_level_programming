#include "main.h"

/**
 * print_last_digit - prints out last digit of an int
 * @n: input
 *
 * Return: ;ast digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	(n > 0) ? (n = n) : (n = -n);
	_putchar('0' + n);

	return (n % 10);
}
