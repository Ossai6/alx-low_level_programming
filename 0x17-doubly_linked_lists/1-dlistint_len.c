#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a double linked list
 *
 * @h: pointer to a double linked list
 * Return: return the numberbof elements in the list.
 * By: Akpe Caleb
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
