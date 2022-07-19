#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string to be found
 * @c: the character to be located
 * Return: pointer to first occurence of c or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
