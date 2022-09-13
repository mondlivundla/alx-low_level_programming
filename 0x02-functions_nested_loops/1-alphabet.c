#include "main.h"

/**
 *main - Entry point
 *
 * print alphabet
 */
void print_alphabet(void)
{
	int j;
	
	for (j = 'a',j <= 'z',j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
