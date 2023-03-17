#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - a function that adds the elements in a list
 *
 * @head: pointer to a double linked list
 * Return: returns the sum.
 * By: Akpe Caleb
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
