#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: data type char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int  i;

	i = 0;

	while (s[i])
		i++;

	return (i);
}
