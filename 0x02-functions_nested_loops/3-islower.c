#include "main.h"

/**
 * _islower - checks is input is a lower case character
 * @c: input from calling function
 *
 * Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
	int i;
	(c <= 122 && c >= 97) ? (i = 1) : (i = 0);

	return (i);
}
