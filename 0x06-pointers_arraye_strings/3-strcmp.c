/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference of comparable characters
 */
int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
	}

	return (*s1 - *s2);
}
