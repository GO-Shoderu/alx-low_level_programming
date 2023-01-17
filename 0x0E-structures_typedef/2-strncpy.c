#include "dog.h"

/**
 * _strncpy - entry level.
 * @dest: input from user
 * @src: input from user
 * @n: input from user
 *
 * Return: Always returning a character
 */

char *_strncpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
