#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int length, i;
	char *p = str;

	for (length = 0; *p != '\0'; length++, p++)
	{
	}

	for (i = (length + 1) / 2; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
