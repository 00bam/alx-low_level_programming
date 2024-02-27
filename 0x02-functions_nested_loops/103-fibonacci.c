#include <stdio.h>

/**
 * main - prints out sum of even fibonacci numbers under 4 million
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 1, j = 0, tempo, sum = 0;

	for ( ; i <= 4000000; )
	{
		if (i % 2 == 0)
			sum += i;
		tempo = i;
		i = i + j;
		j = tempo;
	}
	printf("%ld\n", sum);
	return (0);
}
