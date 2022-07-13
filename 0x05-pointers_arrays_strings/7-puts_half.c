#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: The string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
		i /= 2;
	else
		i = (i + 1) / 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
