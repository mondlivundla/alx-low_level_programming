#include "main.h"

/**
 * _isupper -> checks if a character is uppercase or not
 * @c: character argument to be tested
 * Return: 1 or otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
