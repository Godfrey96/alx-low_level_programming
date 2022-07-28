#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: null if fails otherwise a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int i;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len1++;

	str_concat = malloc(sizeof(char) * len1);

	if (str_concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_concat[len2++] = s1[i];

	for (i = 0; s2[i]; i++)
		str_concat[len2++] = s2[i];

	return (str_concat);
}
