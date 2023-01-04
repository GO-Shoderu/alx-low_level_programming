#include "main.h"

/**
 * _strchr- entry level.
 * @s: array input
 * @c: char input
 * Return: returns a pointer to a char occurence
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (0);
}

