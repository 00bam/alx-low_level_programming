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

	for (; *str != '\0'; str++)
	{
		for (separators_pointer = separators; *separators_pointer != '\0'; separators_pointer++)
		{
			if (*str == *separators_pointer)
			{
				if (str[1] <= 122 && str[1] >= 97)
					str[1] = str[1] - 32;
			}
		}
	}
	return (ptr);
}
