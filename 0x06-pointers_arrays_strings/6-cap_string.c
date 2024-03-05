/**
 * cap_string - capitalizes a string at the beginning of
 * new words
 * @str: string
 *
 * Return: pointer to sting
 */
char *cap_string(char *str)
{
	char *ptr = str, *s_pointer;
	char *s = ",;.!?\"({} \n\t";

	for (; *str != '\0'; str++)
	{
		for (s_pointer = s; *s_pointer != '\0'; s_pointer++)
		{
			if (*str == *s_pointer)
			{
				if (str[1] <= 122 && str[1] >= 97)
					str[1] = str[1] - 32;
			}
		}
	}
	return (ptr);
}
