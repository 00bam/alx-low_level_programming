#include <stdio.h>

/**
 * main - prints combinations of 2 digits in order
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j, k;

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k++);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
