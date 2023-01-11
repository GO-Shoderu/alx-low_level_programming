#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this function create 2 dimensional array of int(s).
 * @width: size of width/row
 * @height: size of height/column 
 * 
 * Return: returns 2 dimensional array of int(s).
 */

int **alloc_grid(int width, int height)
{
	int iterator, iterator_;
	int **newArray;

	if (width == 0 || height == 0)
		return (NULL);

	newArray = (int **)malloc(sizeof(int *) * height);

	if (newArray == NULL)
	{
		free(newArray);
		return (NULL);
	}
	
	for (iterator = 0; iterator < height; iterator++)
	{
		newArray[iterator] = (int *)malloc(sizeof(int) * width);
		
		if (newArray[iterator] == NULL)
		{
			while (iterator >= 0)
			{
				free(newArray[iterator]);
				iterator--;
			}
			
			free(newArray);
			return (NULL);
		} else
		{
			for (iterator_ = 0; iterator_ < width; iterator_++)
				newArray[iterator][iterator_] = 0;
		}
	}

	return (newArray);
}
