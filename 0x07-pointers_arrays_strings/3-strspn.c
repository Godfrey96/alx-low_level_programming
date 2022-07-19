#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: the character to be included
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}
