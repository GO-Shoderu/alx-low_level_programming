#include "main.h"

/**
 * _memcpy - entry level.
 * @dest: array input
 * @src: array input
 * @n: integer input
 * Return: returns a pointer to a char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

