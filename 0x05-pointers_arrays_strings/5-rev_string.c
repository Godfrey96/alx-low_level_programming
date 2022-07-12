#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = length - 1; i >= length / 2; i--)
	{
		c = s[i];
		s[i] = s[length - i -1];
		s[length -i - 1] = c;
	}
}
