#include "main.h"

/**
 * reverse_array - a function that reverses an array of integers.
 * @a: array
 * @n: array of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
