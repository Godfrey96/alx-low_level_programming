#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: character to be searched
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
