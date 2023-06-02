#include "main.h"

/**
 * _strncat - concatenate two strings with maximum of n bytes from src
 *
 * @dest: destination string
 * @src: source string
 * @n: n bytes to copt from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
