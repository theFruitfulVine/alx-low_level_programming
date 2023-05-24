#include "main.h"

/**
 * main - Entry point
 *
 * Description: This program prints lower case alphabets using
 * putchar header prototype
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
