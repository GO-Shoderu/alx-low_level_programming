#include "lists.h"

/**
 * insert_nodeint_at_index- entry level
 * @head: this is the list that needs to be checked
 * @idx: index of node to be added
 * @n: value of the new node
 *
 * Return: address of newly created node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int counter = 0;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (temp)
	{
		while (temp)
		{
			if (counter == idx)
			{
				newNode->next = temp->next;
				temp->next = newNode;
				return (temp->next);
			}

			temp = temp->next;
		}
	}

	free(temp);
	free(newNode);

	return (NULL);
}
