/**
 * _strncat - concatenates at most n characters on a string
 * @dest: destination string
 * @src: source string
 * @n: max number of characters
 *
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count;
	char *ptr = dest;

	while (*dest != '\0')
		dest++;
	for (count = 0; *src != '\0' && count < n; dest++, count++, src++)
		*dest = *src;

	*dest = '\0';

	return (ptr);
}
