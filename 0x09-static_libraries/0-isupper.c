#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: print character
 * Return: 0 on successful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
