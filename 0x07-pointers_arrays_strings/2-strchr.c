#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: represents the string to be searched.
 * @c: It is the character to be located.
 * Return: If c is found - a pointer to the first occurence
 * otherwise -NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
