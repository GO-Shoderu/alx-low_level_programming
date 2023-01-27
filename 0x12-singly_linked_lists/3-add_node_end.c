#include <stdio.h>
#include "lists.h"

/**
 * add_node_end- entry level
 * @head: the list being passed
 * @str: new node content that should be added
 * Return: size of the passed in list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t)), *iter = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (!newNode || !str)
		return (NULL);

	while (str[len])
		len++;

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	iter = *head;

	while (iter->next)
		iter = iter->next;

	iter->next = newNode;

	return (iter->next);
}
