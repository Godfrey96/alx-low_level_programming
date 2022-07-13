#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: the number pointer
 * @n: the number
 * Return: void
 */

void print_array(int *a, int n)
{
	int  i = 0;

	if (n > 0)
	{
		do {
			printf("%d, ", a[i]);
			i++;
		} while (i < n - 1);
		printf("%d", a[i]);
	}
	printf("\n");
}
