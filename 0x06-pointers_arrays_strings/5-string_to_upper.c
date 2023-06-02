#include "main.h"

/**
 * string_toupper - reverses the elements of an array
 *
 * @c: character pointer
 *
 * Return: pointer
 */

char *string_toupper(char *c)
{
	int i;
	int c;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
		}

		c[i] = '\0';

		return (c);
	}
}
