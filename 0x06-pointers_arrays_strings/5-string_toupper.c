/**
 * string_toupper - capitalizes the whole string
 * @str: string
 *
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*(str++) != '\0')
	{
		if (*str <= 122 && *str >= 97)
			*str = *str - 32;
	}
	return (ptr);
}
