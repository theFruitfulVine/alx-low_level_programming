#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in
 * lower and uppercase using putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
