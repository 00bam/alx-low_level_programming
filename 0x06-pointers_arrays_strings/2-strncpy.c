/**
 * _strncpy - copies at most n number of characters
 * @dest: destination string
 * @src: source string
 * @n: max number of strings
 *
 * Return: new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;
	char *ptr = dest;

	for (count = 0; *src != '\0' && count < n; src++, dest++, count++)
	{
		*dest = *src;
	}

	for ( ; count < n; count++, dest++)
		*dest = '\0';

	return (ptr);
}
