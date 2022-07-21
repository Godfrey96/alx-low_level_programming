#include "main.h"

/**
 * check_prime - function
 * @a: the number
 * @b: the number
 * Return: 0 on successful
 */

int check_prime(int a, int b)
{
	if (a % b == 0)
		return (0);
	else if (b == a / 2)
		return (1);
	else
		return (check_prime(a, b + 1));
}

/**
 * is_prime_number - prime number
 * @: the number to check
 * Return: 0 on successful
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n >= 2 && n <= 3)
		return (1);
	else
		return (check_prime(n, 2));
}
