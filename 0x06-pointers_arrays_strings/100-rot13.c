#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: string to encodes
 * Return: a string
 */

char *rot13(char *str)
{
	int i = 0;
	int j = 0;

	char string_rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char string_alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (str[i] != '\0')
	{
		while (string_alpha[j] != '\0')
		{
			if (str[i] == string_alpha[j])
			{
				str[i] = string_rot13[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
