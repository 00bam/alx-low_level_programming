#include "main.h"

/**
 * print_number - prints out given number
 * @n: input number
 */
void print_number(int n)
{
	int i = 0, j = n, k;

	do {
		j = j / 10;
		i++;
	} while (j != 0);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	for ( ; i > 0; i--)
	{
		for (k = 1, j = 1; k < i; k++)
		{
			j = j * 10;
		}

		_putchar('0' + (n / j));
		n = n % j;
	}

}
