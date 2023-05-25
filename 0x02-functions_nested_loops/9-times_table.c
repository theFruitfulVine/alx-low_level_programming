#include "main.h"

/**
 * void times_table - Entry point
 *
 * Description: This program prints the absolute value of the
 * last digit of a number
 *
 * Return: 0 Success
 *
 */

void times_table(void)
{
	int num, mul;

	for (num = 0; num < 9; num++)
	{
		for (mul = 0; mul < 9; mul++)
		{
			mul = num * mul;
			_putchar('0' + (mul/10));
		}
		_putchar('0' + (mul%10));
		_putchar('\n');
	}
}
