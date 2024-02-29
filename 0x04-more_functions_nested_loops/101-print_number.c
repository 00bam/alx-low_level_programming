#include "main.h"

/**
 * print_number - prints out given number
 * @n: input number
 */
void print_number(int n)
{
	unsigned int i = 0, k;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	j = n;

	do {
		j = j / 10;
		i++;
	} while (j != 0);

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
