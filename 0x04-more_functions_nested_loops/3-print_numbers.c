#include "main.h"

/**
 * print_numbers - a function that prints the numbers
 * Return: 0 on successful
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
