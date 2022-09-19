<<<<<<< HEAD
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: c - Variable
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
=======
#include "main.h"

/**
*_isdigit - checks whether a  character is a digit or not
*@c: tested character
*Return: 1 if it is, 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
>>>>>>> master
