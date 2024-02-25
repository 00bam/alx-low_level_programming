#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lower case 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
		i++;
	}
}
