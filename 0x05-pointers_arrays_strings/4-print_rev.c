#include "main.h"

/**
 * print_rev - prints out a string in reverse
 *
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int l;

	l = 0;
	while (*(s + 1) != '\0')
		l++;
	for(; l >= 0; l--)
		_putchar(*(s + l));
	_putchar('\n');
}
