/**
 * _isupper - checks if input char is an upper case letter
 * @c: character to check
 *
 * Return: 1 if true, 0 otherwise
 */
int _isupper(int c)
{
	int i;

	c >= 65 && c <= 90 ? (i = 1) : (i = 0);

	return (i);
}
