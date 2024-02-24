#include <stdio.h>

/**
 * main - prints 0-9 and new line
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i++);
	}
	printf("\n");

	return (0);
}
