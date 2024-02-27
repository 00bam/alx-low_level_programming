#include <stdio.h>

/**
 * main - displays first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int counter;
	unsigned long int i = 1, j = 0, tempo;

	for (counter = 0; counter < 50; counter++)
	{
		tempo = i;
		i = i + j;
		j = tempo;
		printf("%ld", i);
		if (counter < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
