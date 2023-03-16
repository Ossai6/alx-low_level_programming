#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints a double linked list
 *
 * @h: pointer to a double linked list
 * Return: return the nodes.
 * By: Akpe Caleb
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int count = 0;

	temp = h;
	while(temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
