#include "main.h"

/**
 * print_alphabet - print all the alphabets in lowercase
 *
 * Return: Always success
 */
void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
 		_putchar(c);
	}
	_putchar('\n');
}
