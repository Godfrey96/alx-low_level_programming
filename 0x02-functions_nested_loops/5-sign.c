#include "main.h"

/**
 * print_sign - a function that prints a sign of a number
 * @n: The number to check
 * Return 1 if number greater than 0
 * Return 0 if number is equal to zero
 * return -1 if number is less than 0
 *
 * Return: 1 on successfull
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
