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
	int i, j, *ptr;

	for (i = 0; i < size; i++)
	{
		ptr = a;
		for (j = 0; j < size; j++)
		{
			printf("%d", ptr[j]);
		}
		ptr++;
		printf("\n");
	}
}
