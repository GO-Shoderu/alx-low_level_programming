#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t counter = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		counter++;

		if ((*h - (*h)->next) > 0)
		{
			temp = (*h)->next;
			*h = temp;
		}
		else
		{
			*h = NULL;
			break;
		}
	}

	*h = NULL;
	h = NULL;

	return (counter);
}
