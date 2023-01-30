#include "lists.h"

/**
 * pop_listint- entry level
 * @head: this is the list that needs to be checked
 *
 * Return: returns 0 or value of popped head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (!*head)
		return (0);

	temp = *head;
	val = temp->n;
	*head = (*head)->next;

	free(temp);

	return (val);
}
