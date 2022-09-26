#include "main.h"

/**
 * _memset - a memory block
 *@s: address
 *@b: constant byte
 *@n: number of bytes
 *Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)

{

	while (n)

	{

		s[n-1] = b;

		n--;

	}

	return (s);

}
