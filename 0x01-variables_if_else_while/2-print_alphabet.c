#include <stdio.h>
/**
 * main-Entry point
 * a program to print a alphabet in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	char ch = 'a';
	int count = 0;
	do{
		putchar(ch);
		ch++;
		count++;
		putchar("\n");
	}whil(count < 26);
	return (0);
}
