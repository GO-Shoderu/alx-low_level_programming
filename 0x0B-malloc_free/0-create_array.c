#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function creates an array.
 * @size: input from user
 * @c: input from user
 *
 * Return: a char array is returned.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int iterator = 0;
	char *newArray;

	if (size == 0)
		return (NULL);

	newArray = malloc(sizeof(char) * size);

	if (newArray == NULL)
		return (NULL);

	while (iterator < size)
	{
		newArray[iterator] = c;
		iterator++;
	}

	return (newArray);
}
