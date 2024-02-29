#include <stdio.h>
#include <math.h>

/**
 * main - finds highest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long int i = 612852475143, factor;
	int j;

	for (j = 1; j <= sqrt(i) && j != i; j++)
	{
		if (i % j == 0)
		{
			i = (i / j);
			factor = i;
			j = 1;
		}
	}

	printf("%ld\n", factor);
	return (0);
}
