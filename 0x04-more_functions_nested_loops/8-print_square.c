<<<<<<< HEAD
#include "main.h"

/**
 * print_square -  checks for checks for a digit (0 through 9).
 * @size: size -  Variable
 * Return: Always 0.
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
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
*print_square - prints squares
*@size: parameter
*Return: returns nothing
*/

void print_square(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 0; inc1 < size; inc1++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
>>>>>>> master
