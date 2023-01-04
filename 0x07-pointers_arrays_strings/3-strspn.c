#include "main.h"

/**
 * _strspn- entry level.
 * @s: array input
 * @accept: array input
 * Return: returns a counted figure
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					found++;
			}
		} else
		{
			return (found);
		}
	}

	return (found);
}

