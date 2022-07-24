#include "main.h"

/**
 * _abs - a function that computes the absolutevalue ofan integer
 * @n: the number to check
 * Return: on successful
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
