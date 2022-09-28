#include "main.h"

/**
*_sqrt_recursion -> returns natural square root of a number
*@n: number given
*Return: square root of @n
*/

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
