#include "main.h"

/**
 *_isalpha(int c)- Entry point
 *
 * Description: This program returns 1 if a character is lowercase
 * otherwise 0 using putchar header prototype
 *
 * Return: 1 (Success) or 0 (Failure)
 *
 */

int print_sign(int n)
{

	n = n % 10;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

