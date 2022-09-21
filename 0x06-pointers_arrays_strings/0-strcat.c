#include "main.h"

/**
 *strcat -> Concatenates the string pointed to by the @src, includeing the
 *null byte, to the end of the string pointed to by @dest
 *@dest: A pointer to the concatenated string
 *@src: Source string
 *Return: Pointer to destination string @dest
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
