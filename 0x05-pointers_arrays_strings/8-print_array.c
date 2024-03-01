#include <stdio.h>

/**
 * print_array - prints out specified number of elements of an array
 * @a: array
 * @n: elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
