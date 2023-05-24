#include "main.h"

/**
 *_isalpha - Entry point
 *
 * @c - input parameter
 *
 * Description: This program returns 1 if a character is lowercase
 * otherwise 0 using putchar header prototype
 *
 * Return: 1 (Success) or 0 (Failure)
 *
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

