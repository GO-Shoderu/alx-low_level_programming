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
	listint_t *temp = *head, *prev = *head;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int counter = 1;

	if (!newNode || (*head == NULL && idx != 0))
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx != 0)
	{
		while (temp)
		{
			if (counter == idx)
			{
				newNode->next = temp->next;
				temp->next = newNode;
				return (temp->next);
			}

			counter++;
			prev = temp;
			temp = temp->next;
		}

		prev->next = newNode;
		return (newNode);
	} else
	{
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	free(temp);
	free(prev);
	free(newNode);

	return (NULL);
}
