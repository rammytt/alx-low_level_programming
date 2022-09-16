#include "main.h"

/*
 *_ isdigit - checks whether a  character is a digit or not
 *@c: character to be tested
 *Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

		return (0);
}
