#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: string to encode
 * Return: a string
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;

	char arr_Num[] = {'4', '3', '1', '0', '7'};
	char arr_upper[] = {'A', 'E', 'L', 'O', 'T'};
	char arr_lower[] = {'a', 'e', 'l', 'o', 't'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == arr_upper[j] || str[i] == arr_lower[j])
			{
				str[i] = arr_num[j];
			}
			i++;
		}
	}
	return (str);
}
