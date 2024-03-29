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
	int count = 0;
	char *ptr = dest;

	while (*dest != '\0')
		dest++;
	do {
		*dest = *src;
		dest++;
		count++;
	} while ((*(src++) != '\0') && count < n);

	*dest = '\0';

	return (ptr);
}
