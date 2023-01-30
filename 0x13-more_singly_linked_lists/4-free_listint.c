#include "lists.h"

/**
 * free_listint- entry level
 * @head: this is the list that needs to be checked
 *
 * Return: returns nothing
 */

void free_listint(listint_t *head)
{
	free(head);
}
