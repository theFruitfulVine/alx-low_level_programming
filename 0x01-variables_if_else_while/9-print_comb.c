#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints single-digit numbers
 * separated by a comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');

		if (num < 9)
		{
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
