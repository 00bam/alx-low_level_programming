#include <stdio.h>

/**
 * main - prints combinations of 2 digits in order
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j;

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j++);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}
