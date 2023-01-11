#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	int iter, iterator, iterator_, tor;
	char *newArray;

	if (ac == 0)
		return (NULL);

	for (iter = 0, iterator = 0; iterator < ac; iterator++)
	{
		if (av[iterator] == NULL)
			return (NULL);

		for (iterator_ = 0; av[iterator][iterator_] != '\0';  iterator_++)
			iter++;

		iter++;
	}

	newArray = malloc((iter + 1) * sizeof(char));

	if (newArray == NULL)
	{
		free(newArray);
		return (NULL);
	}

	for (iterator = 0, iterator_ = 0, tor = 0; tor < iter; iterator_++, tor++)
	{
		if (av[iterator][iterator_] == '\0')
		{
			newArray[tor] = '\n';
			iterator++;
			tor++;
			iterator_ = 0;
		}

		if (tor < (iter - 1))
			newArray[tor] = av[iterator][iterator_];
	}

	newArray[tor] = '\0';

	return (newArray);
}
