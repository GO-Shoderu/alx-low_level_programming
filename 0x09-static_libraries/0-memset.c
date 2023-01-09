#include "main.h"

/**
 * _memset - entry level.
 * @s: array input
 * @b: character input
 * @n: integer input
 * Return: returns a pointer to a char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

