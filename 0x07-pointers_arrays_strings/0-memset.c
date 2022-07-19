#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a pointer to be filled in a memory
 * @b: the character to be filled
 * @n:number of bytes to be filled
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	do {
		s[i] = b;
		i++;
	} while (i < n);
	
	return (s);
}
