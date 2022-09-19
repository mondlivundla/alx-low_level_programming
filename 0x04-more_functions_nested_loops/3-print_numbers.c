<<<<<<< HEAD
#include "main.h"

/**
 * print_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
=======
#include <stdio.h>
#include "main.h"

/**
*print_numbers - function that print all numbers from
*0 to 9
*
*Return: returns nothing
*/

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
>>>>>>> master
