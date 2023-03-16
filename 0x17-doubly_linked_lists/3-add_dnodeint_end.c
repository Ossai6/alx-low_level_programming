#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - a function that adds a new node at the
 * end of a list
 * @n: The integer to be added to the list
 * @head: head pointer
 * Return: return the new list.
 * By: Akpe Caleb
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tail;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = newnode;
	newnode->prev = tail;
	return (newnode);
}
