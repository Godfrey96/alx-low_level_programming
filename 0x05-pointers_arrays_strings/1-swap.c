#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: The first number to swap
 * @b: The second number to swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
