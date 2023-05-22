#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to n
 * and determines if the last digit is greater than 5, less than 6 or zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_dgt = n % 10;

	if (last_dgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dgt);
	}
	else if (last_dgt < 6 && last_dgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dgt);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dgt);
	}
	return (0);
}
