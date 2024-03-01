#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 */
void rev_string(char *s)
{
	int length, i;
	char c;
	char *p = s;

	for (length = 0; *p != '\0'; length++, p++)
	{
	}

	for (length--, i = 0; i < (length / 2); i++)
	{
		c = *(s + length - i);
		*(s + length - i) = *(s + i);
		*(s + i) = c;
	}
}
