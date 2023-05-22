#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all numbers of base 16
 * in lowercase letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha, num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	if (num > 9)
	{
		for (alpha = 'a'; alpha <= 'f'; alpha++)
		{
			putchar(alpha);
		}
	}
	putchar('\n');

	return (0);
}
