#include "main.h"

/**
 * main - lists arguments
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
