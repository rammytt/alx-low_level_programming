/**
 * _isupper - function to check ifcharacter is uppercase
 * @c: checks input of function
 * Return: returns 1 if `c` is uppercase
 * otherwise always 0 (Success)
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
		return (0);
}
