#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: function argument
 *
 * Description: This program returns 1 if a character is lowercase
 * otherwise 0 using putchar header prototype
 *
 * Return: 1 (Success) or 0 (Failure)
 *
 */

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = (-1) * n;
		return (n);
	}
}

