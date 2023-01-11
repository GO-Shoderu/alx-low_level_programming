#include "main.h"
#include <stdlib.h>

/**
 * str_concat  - this function concatinates strings.
 * @s1: string to be concatinated
 * @s2: string to be concatinated
 *
 * Return: a string containing both strings is returned.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int limit_1 = 0, limit_2 = 0, iterator, iterator_;
	char *newArray;

	if (s1 != NULL)
	{
		while (s1[limit_1] != '\0')
			limit_1++;
	} else
		s1 = "";

	if (s2 != NULL)
	{
		while (s2[limit_2] != '\0')
			limit_2++;
	} else
		s2 = "";

	newArray = (char *)malloc(sizeof(char) * (limit_1 + limit_2 + 1));

	if (newArray == NULL)
	{
		free(newArray);
		return (NULL);
	}

	for (iterator = 0; iterator < limit_1; iterator++)
		newArray[iterator] = s1[iterator];

	for (iterator_ = 0; iterator_ <= limit_2; iterator++, iterator_++)
		newArray[iterator] = s2[iterator_];

	return (newArray);
}
