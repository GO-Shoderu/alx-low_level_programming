#include "main.h"
#include <stdlib.h>

/**
 * _strdup  - this function duplicates a string.
 * @str: string to be duplicated
 *
 * Return: a char array is returned.
 */

char *_strdup(char *str)
{
	unsigned int limit = 0, iterator;
	char *newArray;

	if (str == NULL)
		return (NULL);

	while (str[limit] != '\0')
	{
		limit++;
	}

	newArray = (char *)malloc(sizeof(char) * (limit + 1));

	if (newArray == NULL)
		return (NULL);

	for (iterator = 0; iterator <= limit; iterator++)
		newArray[iterator] = str[iterator];

	return (newArray);
}
