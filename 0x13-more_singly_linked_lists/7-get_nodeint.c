#include "lists.h"

/**
 * get_nodeint_at_index- entry level
 * @head: this is the list that needs to be checked
 * @index: position of node to be returned
 *
 * Return: returns 0 or value of popped head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int iter = 0;

	if (!head)
		return (NULL);

	temp = head;

	while (temp)
	{
		if (iter == index)
			return (temp);

		temp = temp->next;
		iter++;
	}

	free(temp);

	return (NULL);
}
