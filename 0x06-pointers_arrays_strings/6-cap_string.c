#include "main.h"

/**
 * cap_string - capitalises the first letter of a word
 *
 * @c: character pointer
 *
 * Return: pointer
 */

char *cap_string(char *c)
{
	int i, j;
	char s[] = {'\t','\n',' ',',',';','.','!','?','\"','(',')','{','}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; ((c[i] = s[j]) && s[j] != '\0'); j++)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
			}
		}
	}

	c[i] = '\0';

	return (c);
}
