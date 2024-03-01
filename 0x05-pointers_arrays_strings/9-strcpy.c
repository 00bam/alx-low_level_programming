/**
 * _strcpy - copies a string to another string
 * @src: source
 * @dest: destination
 *
 * Return: copy string
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;
	int i = 0;

	do {
		dest[i] = src[i];
	} while (src[i++] != '\0');

	return (p);
}
