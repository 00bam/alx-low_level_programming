#include "main.h"

/**
 * non_int_checker - checks is there are non integer characters in a string
 * @s: string to check
 *
 * Return: 0 is there is a non-int char or the number otherwise
 */

int non_int_checker(char *s)
{
	unsigned int num, i;

	i = 0;
	num = atoi(s);
	if (num == 0)
		return (0);
	while (num >= 10)
	{
		num = num / 10;
		i++;
	}
	i++;
	if (i != strlen(s))
		return (0);
	return (atoi(s));
}

/**
 * main - adds up positive int arguments
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: sum or -1 if there is an error
 */

int main(int argc, char *argv[])
{
	int sum, i, num;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = non_int_checker(argv[i]);
		if (num != 0)
		{
			sum = sum + num;
		}
		else
		{
			printf("Error\n");
			return (-1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
