#include "main.h"

/**
 * _isalpha - a function that checks a lowercase or uppercase character
 * @c: The character to check
 * Return: 1 on successful, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && cc <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
