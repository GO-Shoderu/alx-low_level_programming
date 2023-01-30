#include "lists.h"

/**
 * listint_len- entry level
 * @h: this is the list that needs to be checked
 *
 * Return: size of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *temp = h;

	while (temp)
	{
		temp = temp->next;
		counter++;
	}

	return (counter);
}
