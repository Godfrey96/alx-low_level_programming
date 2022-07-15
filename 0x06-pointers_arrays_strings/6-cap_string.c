#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: string
 * Return: a string
 */

char *cap_string(char *str)
{
	int i = 1;
	int j, c;

	char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			j = 0;
			c = 0;
			while (c == 0 && j < 13)
			{
				if (str[i - 1] == a[j])
				{
					c = 1;
				}
				j++;
			}
			if (c == 1)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
