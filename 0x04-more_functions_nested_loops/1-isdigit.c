#include "main.h"

/**
 * _isdigit -> checks if the character is digit or not
 * @c: character argument to be tested
 * Return: 1 if true, or otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
