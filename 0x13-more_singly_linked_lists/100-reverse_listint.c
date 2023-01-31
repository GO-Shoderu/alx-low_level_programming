#include "lists.h"
#include "2-add_nodeint.c"

/**
 * reverse_listint - reverses the list
 * @head: First node address.
 * Return: the list is returned
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t  **newNode = malloc(sizeof(listint_t));

	if (head == NULL || *head == NULL || newNode == NULL)
		return (NULL);

	while (*head)
	{
		*newNode = add_nodeint(newNode, (*head)->n);
		*head = (*head)->next;
	}

	*head = *newNode;
	free(newNode);

	return (*head);
}
