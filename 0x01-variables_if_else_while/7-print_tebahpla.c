#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in
 * lowercase in reverse order using putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
