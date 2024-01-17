#include "main.h"

/**
 * main - prints number of args
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
