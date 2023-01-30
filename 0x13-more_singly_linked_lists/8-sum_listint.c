#include "lists.h"

/**
 * sum_listint- entry level
 * @head: this is the list that needs to be checked
 * Return: returns 0 or summation of list content
 */

int sum_listint(listint_t *head)
{
	listint_t *iter = head;
	int sum = 0;

	if (!head)
		return (sum);

	iter = head;

	while (iter)
	{
		sum += iter->n;
		iter = iter->next;
	}

	free(iter);

	return (sum);
}
