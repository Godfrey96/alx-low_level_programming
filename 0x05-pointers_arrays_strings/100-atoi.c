#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int s = 1;
	unsigned int n = 0;

	while (*s++)
	{
		if (*s == '-')
			s *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	}

	return (n * s);
}
