#include <stdio.h>

/**
 * main - prints out the first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int over, counter;
	unsigned long int i = 1, j = 0, tempo, tempo2, k, l, m, n;


	for (counter = 0; counter < 90; counter++)
	{
		tempo = i;
		i = i + j;
		j = tempo;
		printf("%ld, ", i);
	}

	k = i / 1000000;
	l = i % 1000000;
	m = j / 1000000;
	n = j % 1000000;
	for ( ; counter < 98; counter++)
	{
		tempo = l;
		over = (l + n) / 1000000;
		l = (l + n) % 1000000;
		n = tempo;
		tempo2 = k;
		k = (k + m + over);
		m = tempo2;
		printf("%ld", k);
		if (l < 100000)
			printf("0");
		printf("%ld", l);
		if (counter < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
