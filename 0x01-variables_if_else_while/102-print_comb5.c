#include <stdio.h>

/**
 * main - prints out combinations of 2 digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, k;

	i = 0;
	while (i < 100)
	{
		k = i + 1;
		while (k < 100)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			k++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
