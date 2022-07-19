#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers.
 * @a: the matrix integers
 * @size: the size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum, mult;

	i = 0;
	sum = 0;
	mult = size * size;

	while (i < mult)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	i = 0;
	sum = 0;

	while (i < mult)
	{
		if (i % (size - 1) == 0 && i != (mult - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
