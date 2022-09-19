<<<<<<< HEAD
#include "main.h"

/**
 * print_most_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50)
		{
			if (a != 52)
			{
			_putchar(a);
			}
		}
	}
	_putchar('\n');
}
=======
#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		putchar(n);
	}
	putchar(10);
}
>>>>>>> master
