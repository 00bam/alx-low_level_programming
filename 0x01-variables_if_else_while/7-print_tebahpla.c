#include <stdio.h>

/**
 * main - prints alphabet in lower case backwards
 *
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c--);
	}
	putchar('\n');

	return (0);
}
