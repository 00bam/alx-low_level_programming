#include "main.h"

/**
 * times_table - prints out a 9 by 9 times table
 */
void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if ((i * j) < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + (i * j));
			}
			else
			{
				_putchar(' ');
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			}
			if (j != 9)
				_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
