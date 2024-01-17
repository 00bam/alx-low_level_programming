#include "main.h"

/**
 * main - finds number of denominations needed
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 is successful or -1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, cents;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (-1);
	}

	cents = atoi(argv[1]);
	j = 0;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents = cents - coins[i];
			j++;
		}
	}

	printf("%d\n", j);
	return (0);
}
