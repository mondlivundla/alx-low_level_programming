<<<<<<< HEAD
#include "main.h"

/**
 * print_triangle -  checks for checks for a digit (0 through 9).
 * @size: size -  Variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if (y <= size - x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
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
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return: returns nothing
*/

void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				putchar(' ');
			}

			for (inc2 = 0; inc2 < inc1; inc2++)
			{
				putchar('#');
			}

			if (inc1 == size)
			{
				continue;
			}

			putchar('\n');
		}
	}
	putchar('\n');
}
>>>>>>> master
