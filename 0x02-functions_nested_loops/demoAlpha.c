#include <stdio.h>

/**
 * print_alphabet - prints out the alphabets in uppercase
 *
 * Return: Always 
*/
void print_alphabet(void)
{
	char alpha;
	
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
 	{
    		putchar(alpha);
	}
	putchar('\n');
}
