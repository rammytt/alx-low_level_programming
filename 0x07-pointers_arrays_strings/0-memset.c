#include "main.h"



/**
 * _memset - a memory block
 * @s: address
 * @b: constant byte
 * @n: number of bytes
 * Return: Always 0 (Success)
 */


void *_memset(void *s, int c, size_t n)
{
	unsigned int index;

	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)

		memory[index] = value;

	return (memory);

}
