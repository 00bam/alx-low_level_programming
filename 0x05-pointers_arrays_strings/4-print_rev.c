#include "main.h"

/**
 * print_rev - prints out a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; *s != '\0'; length++, s++)
	{
	}

	for (length--, s--; length >= 0; length--, s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
