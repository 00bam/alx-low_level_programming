#include "main.h"

/**
 * _isalpha - checks if input is part of the alphabet
 * @c: input from calling function
 *
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	int i;

	i = ((c <= 122 && c >= 97) || (c <= 90 && c >= 65)) ? 1 : 0;
	return (i);
}
