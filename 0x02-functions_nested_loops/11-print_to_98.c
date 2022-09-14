#include <stdio.h>
/**
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
