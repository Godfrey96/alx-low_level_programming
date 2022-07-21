#include "main.h"

/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: the number
 * Return: 0 on successful
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 0));
}

/**
 * sqroot - the sqrt function
 * @a: the number
 * @b: the number
 * Return: 0 on successful
 */

int _sqrt(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (_sqrt(a, b + 1));
}
