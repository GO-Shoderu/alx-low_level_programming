#include "lists.h"

/**
 * print_listint- entry level
 * @h: this is the list that needs to be checked
 *
 * Return: size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
