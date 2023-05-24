#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: function argument
 *
 * Description: This program prints the absolute value of the
 * last digit of a number
 *
 * Return: 1 (Success) or 0 (Failure)
 *
 */

int print_last_digit(int n)
{
	n = _abs(n % 10);

	_putchar('0' + n);

	return (n);
}

