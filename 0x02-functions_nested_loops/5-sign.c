#include "main.h"

/**
 * print_sign -> prints out sign depending on condition met
 * @n: character argument
 * Return: returns 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		n *= -1
		_putchar (n + '0');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
