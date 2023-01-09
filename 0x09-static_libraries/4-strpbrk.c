#include "main.h"
#include <stddef.h>

/**
 * _strpbrk- entry level.
 * @s: array input
 * @accept: array input
 * Return: returns a pointer to a char occurence
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return (NULL);
}

