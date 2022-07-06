#include <unistd.h>
#include <stdio.h>

/**
 * main-Entry point
 * THe character to print
 * Return : 0 on successfull
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
