#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: the number
 * Return:  on successful
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		do {
			_putchar('_');
			i++;
		} while (i < n);
	}
	_putchar('\n');
}
