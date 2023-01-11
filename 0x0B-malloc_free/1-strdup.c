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

	newArray = (char *)malloc(sizeof(char) * (i + 1));

	if (newArray == NULL || str == NULL)
		return (NULL);

	while (str[limit] != '\0')
	{
		limit++;
	}

	for (iterator = 0; iterator <= limit; iterator++)
		newArray[iterator] = str[iterator];

	return (newArray);
}
