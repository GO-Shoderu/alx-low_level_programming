#include "lists.h"

/**
 * add_nodeint- entry level
 * @head: this is the list that needs to be checked
 * @n: initial size of the list
 *
 * Return: size of the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
