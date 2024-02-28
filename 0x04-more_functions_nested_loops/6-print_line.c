#include "main.h"

/**
 * print_line - prints out a line of specified length
 * @n: length
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
