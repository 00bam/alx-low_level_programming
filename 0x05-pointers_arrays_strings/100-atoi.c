/**
 * _atoi - finds int from a string
 * @s: string pointer
 *
 * Return: value of int
 */
int _atoi(char *s)
{
	int sign = 0, value = 0, signal = 0, multiplier = 1, mul = 1, digits = 0;

	for ( ; *s != '\0'; s++)
	{
		if (*s == '-')
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

	if (sign % 2 != 0)
		mul = -mul;
	for (s--; *s >= '0' && *s <= '9'; s--)
	{
		value += (mul * ((*s - '0') * multiplier));
		digits++;
		if (digits < 10)
			multiplier *= 10;
	}

	return (value);
}
