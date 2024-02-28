/**
 * _isdigit - checks if input char is a digit
 * @c: input char
 *
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	c >= 48 && c <= 57 ? (i = 1) : (i = 0);

	return (i);
}
