#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 *
 * @a: first parameter
 * @n: n elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; i < (n = n - 1); i++)
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
		n = n - 1;
	}
}
