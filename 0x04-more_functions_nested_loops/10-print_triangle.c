#include "main.h"

/**
 * print_triangle - prints out triangle of specified size
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, space = size, k;

	for (i = 0; i < size; i++, space--)
	{
		for (k = 0; k < space - 1; k++)
			_putchar(' ');
		for (j = 0; j < (size - k); j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
