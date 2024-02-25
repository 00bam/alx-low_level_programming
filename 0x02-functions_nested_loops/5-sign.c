#include "main.h"

/**
 * print_sign - prints out the sign of an integer
 * @n: int from calling function
 *
 * Return: 1 if positive, -1 if negative or 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
