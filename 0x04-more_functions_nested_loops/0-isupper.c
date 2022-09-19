<<<<<<< HEAD
#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: c is a Variable
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
=======
#include "main.h"

/**
*_isupper - checks if a  character is uppercase or not
*@c: character to be tested
*Return: 1 whether it is, 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
>>>>>>> master
