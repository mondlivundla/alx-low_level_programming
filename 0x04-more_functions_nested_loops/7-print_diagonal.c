<<<<<<< HEAD
#include "main.h"

/**
 * print_diagonal -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{
				if (x == y)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
=======
#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints a diagonal
*@n: parameter
*Return: returns nothing
*/

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
>>>>>>> master
