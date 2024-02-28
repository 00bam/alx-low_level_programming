#include <stdio.h>

/**
 * main - prints out 1-100 but "Fizz" and "Buzz" in place of multiples
 * of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz ");
			else
				printf(" ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
