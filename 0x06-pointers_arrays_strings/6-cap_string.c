/**
 * cap_string - capitalizes a string at the beginning of
 * new words
 * @str: string
 *
 * Return: pointer to sting
 */
char *cap_string(char *str)
{
	char *ptr = str, *separators_pointer;
	char *separators = ",;.!?\"({} \n\t";

	while (*str != '\0')
	{
		separators_pointer = separators;
		while (*separators_pointer != '\0')
		{
			if (*str == *separators_pointer)
			{
				str++;
				if (*str <= 122 && *str >= 97)
					*str = *str - 32;
			}
			separators_pointer++;
		}
		str++;
	}
	return (ptr);
}
