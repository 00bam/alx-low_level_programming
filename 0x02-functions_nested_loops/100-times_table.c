#include "main.h"

/**
 * print_times_table - prints out a 9 by 9 times table
 * @n: limit
 */
void print_times_table(int n)
{
	int i = 0, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((i * j) < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + (i * j));
				}
				else if ((i * j) < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + ((i * j) / 10));
					_putchar('0' + ((i * j) % 10));
				}
				else
				{
					_putchar(' ');
					_putchar('0' + ((i * j) / 100));
					_putchar('0' + (((i * j) - 100) / 10));
					_putchar('0' + ((i * j) % 10));
				}
				j != n ? _putchar(',') : (j = j);
			}
			_putchar('\n');
		}
	}
}
