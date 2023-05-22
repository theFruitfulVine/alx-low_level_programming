#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in
 * lowercase using putchar function except the letters q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar('\n');

	return (0);
}
