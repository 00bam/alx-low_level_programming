/**
 * leet - translates string to leet language
 * @str: string
 *
 * Return: pointer to string
 */
char *leet(char *str)
{
	int i, j;
	char *noob = "aeotlAEOTL", *leet = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; noob[j] != '\0'; j++)
		{
			if (str[i] == noob[j])
				str[i] = leet[j % 5];
		}
	}

	return (str);
}
