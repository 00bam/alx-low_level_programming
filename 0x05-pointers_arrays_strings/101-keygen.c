#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates valid key for another program
 *
 * Return: 0
 */
int main(void)
{
	int i = 0, c;

	srand(time(NULL));

	while (i <= 2715)
	{
		c = rand();
		c = c % 10;
		i += c + '0';
		printf("%d", c);
	}

	printf("%c", 2772 - i);

	return (0);
}
