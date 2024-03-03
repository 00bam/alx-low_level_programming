/**
 * _atoi - finds int from a string
 * @s: string pointer
 *
 * Return: value of int
 */
int _atoi(char *s)
{
	int sign = 0, value = 0, signal = 0, multiplier = 1;

	for ( ; *s != '\0'; s++)
	{
		if (*s == '-')
			sign--;
		else if (*s == '+')
			sign++;

		if (*s >= '0' && *s <= '9')
		{
			for ( ; *s >= '0' && *s <= '9'; s++)
			{
				signal++;
			}
		}

		if (signal)
			break;
	}

	for (s--; *s >= '0' && *s <= '9'; s--, multiplier *= 10)
	{
		value += ((*s - '0') * multiplier);
	}

	if (sign < 0)
		value = -value;

	return (value);
}
