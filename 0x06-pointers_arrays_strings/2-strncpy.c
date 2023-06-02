#include "main.h"

/**
 * _strncpy - copies a string not exceeding n bytes
 *
 * @dest: destination string
 * @src: source string
 * @n: n bytes to copy from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
