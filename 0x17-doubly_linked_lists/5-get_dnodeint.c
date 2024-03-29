#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - a function that gets a node
 *
 * @index: The index to be retrieved
 * @head: head pointer
 * Return: return the new list and element at index
 * By: Akpe Caleb
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}

	return (temp);
}
