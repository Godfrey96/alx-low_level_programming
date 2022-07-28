#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * which contains a copy of the string given as a parameter.
 * @str: th e string
 * Return: null if str is null otherwise a pointer
 */

char *_strdup(char *str)
{
	char *ch;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	ch = malloc(sizeof(char) * (len + 1));

	if (ch == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ch[i] = str[i];

	ch[len] = '\0';

	return (ch);
}
