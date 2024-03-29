#include "lists.h"

/**
 * add_nodeint_end- entry level
 * @head: this is the list that needs to be checked
 * @n: initial size of the list
 *
 * Return: size of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;

		temp->next = newNode;

		return (temp->next);
	}

	*head = newNode;

	return (newNode);
}
