#include "lists.h"

/**
 * free_listint2- entry level
 * @head: this is the list that needs to be checked
 *
 * Return: returns nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
