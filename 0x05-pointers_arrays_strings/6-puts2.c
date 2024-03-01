#include "main.h"

/**
 * puts2 - prints out everyother char in a string
 * @str: string
 */
void puts2(char *str)
{
	int length, i;
	char *p = str;

	for (length = 0; *p != '\0'; length++, p++)
	{
	}

	for (i = 0; i < length; i++)
	{
		if (!(i % 2))
			_putchar(*(str + i));
	}
	_putchar('\n');
}
