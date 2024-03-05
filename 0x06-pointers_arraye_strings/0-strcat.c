/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: sourcw string
 *
 * Return: new string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
		dest++;
	do {
		*dest = *src;
		dest++;
	} while (*(src++) != '\0');

	return (ptr);
}
