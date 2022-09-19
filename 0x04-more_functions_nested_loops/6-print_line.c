<<<<<<< HEAD
#include "main.h"

/**
 * print_line -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
=======
#include <stdio.h>
#include "main.h"

/**
*print_line - prints a straight line
*@n: parameter
*Return:returns nothing
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
>>>>>>> master
