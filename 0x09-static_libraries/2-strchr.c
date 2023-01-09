#include "main.h"
#include <stddef.h>

/**
 * _strchr- entry level.
 * @s: array input
 * @c: char input
 * Return: returns a pointer to a char occurence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

