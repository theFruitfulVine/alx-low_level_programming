#include "main.h"
/**
 * _memcpy - Copies memory
 *
 * @dest: where to copy memory to
 * @n: the number of bytes to be copied
 * @src: the memory area to copy from
 *
 * Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
