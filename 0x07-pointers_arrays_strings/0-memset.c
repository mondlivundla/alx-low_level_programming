#include "main.h"

/**
 * _memset -> Fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c
 * @s: a pointer to be filled in the memory area
 * @b: character to fill the memory with
 * @n: number of bytes
 * Return: a pointer in the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;


	return (memory);
}
