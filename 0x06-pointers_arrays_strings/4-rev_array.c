#include "main.h"
#include <stdio.h>

/**
 * reverse_array - entry level.
 * @a: input from user
 * @n: input from user
 */

void reverse_array(int *a, int n)
{	
	int i;
	int limit = n;

	i = 0;
	n--;

	while (i < (limit / 2))
	{
		int temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++;
		n--;
	}
}
