#include "main.h"

/**
 * get_length - get the palindrome length
 * @s: the string
 * Return: 0 on succesful
 */

int get_length(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += get_length(s + len);
	}
	return (len);
}

/**
 * check_palindrome - function to check palindrome
 * @s: the string
 * @len: the length
 * @i: the index
 * Return: 0 on successful
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	else if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));
	else
		return (0);
}

/**
 * is_palindrome - check palindrome
 * @s: the string
 * Return: 0 on successful
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = get_length(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, i));
}
