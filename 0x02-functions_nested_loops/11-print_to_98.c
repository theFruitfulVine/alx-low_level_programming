#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * @n: starting number
 *
 * Description: This program prints numbers from n to 98
 *
 * Return: nothing
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
