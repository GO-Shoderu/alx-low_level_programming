#include <stdio.h>
#include "lists.h"

/**
 * list_len- entry level
 * @h: the list being passed
 * Return: size of the passed in list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
