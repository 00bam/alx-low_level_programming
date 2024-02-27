#include <stdio.h>

/**
 * main - prints out sum of multiples of 3 and 5 under 1024
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0, i = 1;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
