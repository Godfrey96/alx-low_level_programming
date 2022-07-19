#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: the string to be found
 * @needle: the string to be match
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++
			}
		}
		haystack++;
	}
	return ('\0');
}
