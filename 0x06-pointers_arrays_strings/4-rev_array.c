/**
 * reverse_array - reverses the order of an array
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int temp, position;

	for (position = 0; position < n / 2; position++)
	{
		temp =  a[n - position - 1];
		a[n - position - 1] = a[position];
		a[position] = temp;
	}
}
