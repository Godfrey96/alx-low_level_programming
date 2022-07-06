#include "main.h"

/**
 * _islower - checks the lowercase ltter
 * @c: The character to be checked.
 *
 * Return 1 if c is lowercase
 * Return 0 otherwise
 *
 * Return: 1 on successful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
